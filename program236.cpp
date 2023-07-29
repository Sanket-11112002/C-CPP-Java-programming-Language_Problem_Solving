#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X400;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"11th bit is ON"<<"\n";
    }
    else
    {
        cout<<"11th bit is OFF"<<"\n";
    }

    return 0;
}

/*
    No :        13

    Binary  :   0   0   0   0   1   1   0   1

    Mask    :   0   0   0   0   0   1   0   0           &      

------------------------------------------------------
  iResult       0   0   0   0   0   1   0   0   





    0   1   0   0   0   0   0   0   0   0   0   0
    (0  1   0   0)  (0   0   0   0)   (0   0   0   0)
            4               0               0
            0X400 
*/