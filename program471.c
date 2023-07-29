#include<stdio.h>

// Input : 6785
// Output : 5   8   7   6   

void FactorsR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactorsR(iValue);
    
    return 0;
}