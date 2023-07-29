#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;        // Characteristics
        int iCount;         // Chracteristics

    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

void SinglyLL:: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;    // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)   // LL is empty
    {
        First = newn;
    }
    else    // LL contains atleast one node in it
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL:: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;    // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)   // LL is empty
    {
        First = newn;
    }
    else    // LL contains atleast one node in it
    {
        PNODE temp = First;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
    iCount++;
}

void SinglyLL:: DeleteFirst()
{
    if(First == NULL)           // Empty LL
    {
        return;
    }
    else if(First->next == NULL)    // Single node in LL
    {
        delete First;       // free(First);
        First = NULL;
    }
    else        // More than one node in LL
    {
        PNODE temp = First;

        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL:: DeleteLast()
{
    if(First == NULL)           // Empty LL
    {
        return;
    }
    else if(First->next == NULL)    // Single node in LL
    {
        delete First;       // free(First);
        First = NULL;
    }
    else        // More than one node in LL
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

void SinglyLL:: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked list are : "<<"\n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }
    cout<<" NULL"<<"\n";
}

int SinglyLL:: Count()
{
    return iCount;
}

SinglyLL:: SinglyLL()
{
    cout<<"Inside constructor\n";

    First = NULL;
    iCount = 0;
}

SinglyLL:: ~SinglyLL()
{
    cout<<"Inside destructor\n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First -> next;
        delete temp;
    }
}

void SinglyLL:: InsertAtPos(int no, int ipos)
{
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL:: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int icnt = 1; icnt < ipos -1; icnt++)
        {
            temp = temp -> next;
        }

        tempX = temp->next;
        temp -> next = temp->next->next;

        delete tempX;

        iCount--;
    }
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous LinkedList Application \n";

    while(1)
    {
        cout<<"------------------------------------------------------\n";
        cout<<"Please enter your choice : \n\n";

        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at the given position\n";
        cout<<"4 : Delete node from first position\n";
        cout<<"5 : Delete node from last position\n";
        cout<<"6 : Delete node from the given position\n";
        cout<<"7 : Display the elements of Linked List\n";
        cout<<"8 : Count number of nodes from Linked List\n";
        cout<<"9 : Terminate the application\n";
        cout<<"------------------------------------------------------\n";

        cin>>iChoice;

        cout<<"------------------------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;                

            case 3:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;

                cout<<"Enter the position : \n";
                cin>>iPosition;

                obj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                obj.DeleteFirst();  
                break;
            
            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the position : \n";
                cin>>iPosition;

                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Number of elements are : "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank you for using the applicayion\n";
                return 0;

            default:
                cout<<"Invalid choice\n";
                break;
        }
    }

    return 0;
}