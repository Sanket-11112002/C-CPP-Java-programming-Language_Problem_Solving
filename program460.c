// input : 4
// output :     *   *   *   *

#include<stdio.h>

void DisplayI(int iNo)
{
     int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);  // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}