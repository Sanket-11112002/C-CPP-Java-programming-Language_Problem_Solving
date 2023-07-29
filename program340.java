import java.util.*;
//             iNo = 987898     4
class Digits
{
    int GenericRoot(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo >= 10)
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            if(iSum >= 10)
            {
                iNo = iSum;
                iSum = 0;
            }
            else
            {
                iNo = iSum;
                break;
            }
        }   
        return iNo;
    }
}

class program340
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        int iRet = dobj.GenericRoot(iNo);
        System.out.println("Generic Root is : "+iRet);
    }
}

/*
            iNo = 987898

            iSum = 9 + 8 + 7 + 8 + 9 + 8
            iSum = 49

            iNo = 49
            isum = 4 + 9
            iSum = 13

            iNo = 13
            iSum 1 + 3
            iSum = 4

*/