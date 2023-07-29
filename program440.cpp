#include<iostream>
using namespace std;

template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * first;
        int iCount;

    SinglyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyLL <T>::SinglyLL()
{}

template <class T>
void SinglyLL<T>::Display()
{}

template <class T>
int SinglyLL<T>::Count()
{
    return 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{}

template <class T>
void SinglyLL<T>::DeleteFirst()
{}

template <class T>
void SinglyLL<T>::DeleteLast()
{}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL <int>obj1;
    
    return 0;
}