#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo1;
        int iNo2;

        int Maximum()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else
            {
                return iNo2;
            }
        }
};

int main()
{   
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    Number nobj;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;
    nobj.iNo1 = iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;
    nobj.iNo2 = iValue2;

    iRet = nobj.Maximum();
    cout<<"Maximum number is : "<<iRet<<"\n";
    
    return 0;
}