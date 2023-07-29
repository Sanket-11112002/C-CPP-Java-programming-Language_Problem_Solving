import java.util.*;

class Digits
{
    int SumDigits(int iValue)
    {
        int iSum = 0;
        if(iValue < 0)
        {
            iValue = -iValue;
        }
        
        while(iValue != 0)
        {
            iSum = iSum + (iValue % 10);
            iValue = iValue / 10;
        }
        return iSum;
    }
}

class program339
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        int iRet = dobj.SumDigits(iNo);
        System.out.println("Sum of digits is : "+iRet);
    }
}