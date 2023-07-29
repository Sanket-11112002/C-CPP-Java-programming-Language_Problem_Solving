import java.util.*;

class program368
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");

        System.out.println("Updated string is : "+str);

    }
}
