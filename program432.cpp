#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);
        void Accept();
        void Display();   
};

template <class T>
ArrayX<T>::ArrayX(int length)
{
    Size = length;
    Arr = new int[Size];
}

template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the elements of array\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout<<"Elements of array are \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}
    
int main()
{
    ArrayX<int> obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}