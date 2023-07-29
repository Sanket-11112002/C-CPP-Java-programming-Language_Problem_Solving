
#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            cout<<"Inside constructor"<<"\n";
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~Array()
        {
            cout<<"Inside destructor"<<"\n";
            delete []Arr;
        }
        
        void Accept()
        {
            cout<<"Inside Accept method"<<"\n";         

            cout<<"Enter the elements : "<<"\n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Inside Display method"<<"\n";         

            cout<<"Elements of the array are : "<<"\n";
            
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Summation()
        {
            cout<<"Inside Summation method"<<"\n";         

            int iSum = 0;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{   
    cout<<"Inside main"<<"\n";
    
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number of elements : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    
    iRet = aobj.Summation();

    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}