#include<iostream>
using namespace std;

void Swap(int *No1, int *No2)
{
    int Temp;
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