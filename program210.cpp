/*
    iRow = 4
    iCol = 4

    *   *   *   *   
    *   *   *   *   
    *   *   *   *   
    *   *   *   *   

*/
#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i =1; i<= iRow; i++)
    {
        for(j =1; j<= iCol; j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{   
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter number of rows : "<<"\n";
    cin>>iNo1;
    
    cout<<"Enter number of columns : "<<"\n";
    cin>>iNo2;

    Display(iNo1, iNo2);

    return 0;
}