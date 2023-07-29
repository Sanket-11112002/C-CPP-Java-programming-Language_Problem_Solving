#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        struct node *next;
        struct node *prev;
    
        node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }

        node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }

}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int ino, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

DoublyCL:: DoublyCL()
{}

DoublyCL:: ~DoublyCL()
{}

void DoublyCL::InsertFirst(int ino)
{}
void DoublyCL::InsertLast(int ino)
{}
void DoublyCL::InsertAtPos(int ino, int ipos)
{}

void DoublyCL::DeleteFirst()
{}
void DoublyCL::DeleteLast()
{}
void DoublyCL::DeleteAtPos(int ipos)
{}

void DoublyCL::Display()
{}
int DoublyCL::Count()
{
    return iCount;
}

int main()
{
    DoublyCL obj;
    
    return 0;
}