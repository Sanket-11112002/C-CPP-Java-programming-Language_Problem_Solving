#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         

    newn->data = no;                           
    newn->next = NULL;

    if(*Head == NULL)                          
    {
        *Head = newn;                           
    }
    else
    {
        newn->next = *Head;                    
        *Head = newn;                          
    }
}

void DisplayI(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next; 
    }
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
        DisplayR(Head);
    }
}

int CountI(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);  
    InsertFirst(&First,10); 

    DisplayR(First);

    return 0;
}