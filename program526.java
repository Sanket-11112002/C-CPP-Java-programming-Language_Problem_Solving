import java.util.*;

class Student
{
  public int Rno;
  public String Name;
  public int Age;
  public int Marks;

  public static int Generator;

  static
  {
    Generator = 0;
  }

  public Student(String str, int X, int Y)
  {
    this.Rno = ++Generator;
    this.Name = str;
    this.Age = X;
    this.Marks = Y;
  }

  public void Display()
  {
    System.out.println(this.Rno + " " +this.Name + " " + this.Age + " " + this.Marks);
  }
}

class DBMS
{
  public LinkedList <Student> lobj;

  public DBMS()
  {
    lobj = new LinkedList <Student> ();
  }

  public void StartDBMS()
  {
    System.out.println("Marvellous DBMS started succesfully...");
    System.out.println("Table Schema created succesfully...");
    // Logic
  }
}

class program526
{
  public static void main(String arg[])
  {
    DBMS obj = new DBMS();
    obj.StartDBMS();
  }
}