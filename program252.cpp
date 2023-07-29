#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos-1);
    iMask = ~iMask;

    iResult = iNo & iMask;
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

    iRet = OffBit(iValue,iBit);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}

/*
    iNo = 120
    iNo     0   1   1   1   1   0   0   0

    iPos = 7

    iMask = 0x0000001;
    iMask   0   0   0   0   0   0   0   1


    iMask = iMask << (iPos -1);
    iMask = iMask << (7 -1);
    iMask = iMask << 6;

    iMask   0   1   0   0   0   0   0   0

    iMask = ~iMask;
    iMask   1   0   1   1   1   1   1   1

    iResult = iNo & iMask
    iNo     0   1   1   1   1   0   0   0
    iMask   1   0   1   1   1   1   1   1       &
    ----------------------------------------------
    iResult 0   0   1   1   1   0   0   0
*/


