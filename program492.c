#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if( No == temp->data)
            {
                printf("Duplicate element : Unable to insert\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp -> lchild;
            }
        }
    }
}

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Display(Head->lchild);
        Display(Head->rchild);
    }
}

int main()
{
    PNODE First = NULL;

    Insert(&First,21);
    Insert(&First,25);
    Insert(&First,15);

    printf("Elements are : \n");
    
    Display(First);

    return 0;
}