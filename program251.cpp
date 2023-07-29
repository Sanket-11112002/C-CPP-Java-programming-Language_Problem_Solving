#include<iostream>
using namespace std;

typedef unsigned int UINT;

//  1111    1111    1111    1111    1111    1111    1011    1111
//  F       F       F       F       F       F       B       F

UINT OffBit(UINT iNo)
{
    return (iNo & 0XFFFFFFBF);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
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



/*

    iPos = 7
    iNo = 56

    iNo        0   0   1   1   1   0   0   0 
    iMask      1   0   1   1   1   1   1   1         &
-----------------------------------------------------
   iResult     0   0   1   1   1   0   0   0 

    iPos = 7
    iNo = 120

    iNo        0   1   1   1   1   0   0   0 
    iMask      1   0   1   1   1   1   1   1         &
-----------------------------------------------------
   iResult     0   0   1   1   1   0   0   0
*/


