#include<stdio.h>

// Input : 6785
// Output : 5   8   7   6   

int SumI(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumI(iValue);
    printf("Addition of digits : %d\n",iRet);
    return 0;
}