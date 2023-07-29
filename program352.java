import java.util.*;

class program352
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        System.out.println("Your name is : "+name);

        System.out.println("Length of string is : "+name.length());

        char str[] = name.toCharArray();

        for(int iCnt = 0; iCnt < str.length; iCnt++)
        {
            System.out.println(str[iCnt]);
        }
    }
}
