#include<stdio.h>

// Input : 6785
// Output : 5   8   7   6   

void DisplayR(int iNo)
{
    if(iNo != 0)
    {
        printf("%d\t",iNo%10);
        iNo = iNo / 10;
        DisplayR(iNo);
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