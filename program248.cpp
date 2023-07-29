#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToogleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos-1);
    
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the position : "<<"\n";
    cin>>iBit;

    iRet = ToogleBit(iValue,iBit);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}

/*

    iPos = 7

    iNo        0   0   1   1   0   1   0   0 
               0   1   0   0   0   0   0   0        ^
-----------------------------------------------------
               0   0   1   1   0   1   0   0
*/


