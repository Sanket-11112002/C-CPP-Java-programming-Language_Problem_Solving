#include<stdio.h>

int strlenI(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenI(Arr);

    printf("Length of string is : %d\n",iRet);

    return 0;
}