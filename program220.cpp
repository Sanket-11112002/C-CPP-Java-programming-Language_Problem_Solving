#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:
        Digit(int X)
        {
            iNo = X;
        }
};

int main()
{   
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    
    return 0;
}