#include<stdio.h>

// Input : 6785
// Output : 5   8   7   6   

void FactorsI(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactorsI(iValue);
    
    return 0;
}