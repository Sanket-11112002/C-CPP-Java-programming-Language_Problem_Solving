#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;

    cout<<"Hexadecimal conversion of : "<<iNo<<"is : "<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        if(iDigit <= 9)
        {
            cout<<iDigit;           
        }
        else
        {
                switch(iDigit)
                {
                    case 10:
                        cout<<"A";
                        break;
                    case 11:
                        cout<<"B";
                        break;    
                    case 12:
                        cout<<"C";
                        break;
                    case 13:
                        cout<<"D";
                        break;                                        
                    case 14:
                        cout<<"E";
                        break; 
                    case 15:
                        cout<<"F";
                        break;                                       
                } 

        }
        
        iNo = iNo / 16;
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DisplayHexadecimal(iValue);

    return 0;
}
