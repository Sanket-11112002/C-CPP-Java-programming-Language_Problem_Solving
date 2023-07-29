import java.util.*;
import java.io.*;

class program504
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File succesfully created");
            }
            else
            {
                System.out.println("Unable to create file");
            }
        }
        catch(IOException iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}