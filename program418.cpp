#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

double Addition(double No1, double No2)
{
    double Ans = 0;
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

    return 0;
}