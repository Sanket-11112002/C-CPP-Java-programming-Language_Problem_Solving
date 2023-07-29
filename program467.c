#include<stdio.h>

// Input : 6785
// Output : 5   8   7   6   

void DisplayR(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo);  // Head recursion
        printf("%d\t",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}