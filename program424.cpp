#include<iostream>
using namespace std;

template <class T>
void Swap(T *No1, T *No2)
{
    T Temp;
    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;
}

int main()
{
    int A = 10, B = 11;
    Swap(&A,&B);
    
    cout<<"Data after swapping : "<<"\n";
    cout<<"Value of A : "<<A<<"\n";
    cout<<"Value of B : "<<B<<"\n";

    return 0;
}