#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

bool Search(PNODE Head, int No)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }

    while(Head != NULL)
    {
        if( No == Head -> data)
        {
            flag = true;
            break;
        }
        else if(No > Head -> data)
        {
            Head = Head -> rchild;
        }
        else if(No < Head -> data)
        {
            Head = Head -> lchild;
        }
    }
    return flag;
}

int CountNodes(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        CountNodes(Head->lchild);
        CountNodes(Head->rchild);
    }

    return iCnt;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First,21);
    Insert(&First,25);
    Insert(&First,15);
    Insert(&First,78);
    Insert(&First,56);
    Insert(&First,10);
    Insert(&First,55);
    Insert(&First,34);
    Insert(&First,20);                        

    printf("\nElements in Preorder format : \n");
    Preorder(First);

    printf("\nElements in Postorder format : \n");
    Postorder(First);

    printf("\nElements in Inorder format : \n");
    Inorder(First);

    bRet = Search(First,516);
    if(bRet == true)
    {
        printf("\nElement is there in BST\n");
    }
    else
    {
        printf("\nElement is not there in BST");
    }

    printf("Number of nodes are : %d\n",CountNodes(First));
    
    return 0;
}