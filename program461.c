    #include<stdio.h>

    void DisplayR(int iNo)
    {
        static int iCnt = 1;

        if(iCnt <= iNo)
        {
            printf("*\t");
            iCnt++;
            DisplayR(iNo); 
        }
    }

    int main()
    {
        int iValue = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        DisplayR(iValue);

        printf("End of main\n");

        return 0;
    }