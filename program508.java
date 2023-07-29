import java.util.*;
import java.io.*;

class program508
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        try
        {
            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                System.out.println("Its a directory");
            }
            else
            {
                System.out.println("Its not a directory");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}