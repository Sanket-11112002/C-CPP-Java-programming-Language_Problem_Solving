#include<iostream>
using namespace std;

template <class T>      // Template header
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int A = 10, B = 11, Ret = 0;
    Ret = Addition(A,B);
    cout<<"Addition is : "<<Ret<<"\n";

    double X = 90.7, Y = 78.9, Result = 0.0;
    Result = Addition(X,Y);
    cout<<"Addition is : "<<Result<<"\n";

    float L = 90.7f, M = 78.9f, Resultf = 0.0f;
    Resultf = Addition(L,M);
    cout<<"Addition is : "<<Resultf<<"\n";

    return 0;
}