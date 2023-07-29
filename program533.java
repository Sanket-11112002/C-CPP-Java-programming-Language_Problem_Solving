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

  // insert into table student values(______, _______, _______);
  public void InsertIntoTable(String name, int age, int marks)
  {
    Student sobj = new Student(name,age,marks);
    lobj.add(sobj);
  }

  // select * from student
  public void SelectFrom()
  {
    System.out.println("Records from the student table are : ");

    for(Student sref : lobj)
    {
      sref.Display();
    }
  }

  // select * from student where Rno = 11
  public void SelectFrom(int no)
  {
    System.out.println("Records from the student table are : ");

    for(Student sref : lobj)
    {
      if(sref.Rno == no)
      {
        sref.Display();
        break;
      }
    }
  }

    // select * from student where Name = 'Rahul'
  public void SelectFrom(String str)
  {
    for(Student sref : lobj)
    {
      if(str.equals(sref.Name))
      {
        sref.Display();
        break;
      }
    }
  }

  // select MAX(marks) from student
  public int Aggregate_Max()
  {
    Student temp = lobj.get(0);
    int iMax = temp.Marks;

    for(Student sref : lobj)
    {
      if(sref.Marks > iMax)
      {
        iMax = sref.Marks;
      }
    }
    return iMax;
  }

  // select MIN(marks) from student
  public int Aggregate_Min()
  {
    Student temp = lobj.get(0);
    int iMin = temp.Marks;

    for(Student sref : lobj)
    {
      if(sref.Marks < iMin)
      {
        iMin = sref.Marks;
      }
    }
    return iMin;
  }

  // select SUM(marks) from student
  public int Aggregate_Sum()
  {
    int iSum = 0;

    for(Student sref : lobj)
    {
      iSum = iSum + sref.Marks;
    }
    return iSum;
  }

  // select AVG(marks) from student
  public float Aggregate_Avg()
  {
    int iSum = 0;

    for(Student sref : lobj)
    {
      iSum = iSum + sref.Marks;
    }
    return (iSum / (lobj.size()));
  }
}

class program533
{
  public static void main(String arg[])
  {
    DBMS obj = new DBMS();
    obj.StartDBMS();

    obj.InsertIntoTable("Rahul",23,89);    
    obj.InsertIntoTable("Sagar",26,98);
    obj.InsertIntoTable("Pooja",20,56);
    obj.InsertIntoTable("Sayali",30,78);
    obj.InsertIntoTable("Tejas",29,68);

    obj.SelectFrom();
    obj.SelectFrom(4);
    obj.SelectFrom("Tejas");
    
    System.out.println("Maximum marks are : "+obj.Aggregate_Max());
    System.out.println("Minimum marks are : "+obj.Aggregate_Min());
    System.out.println("Addition of marks are : "+obj.Aggregate_Sum());
    System.out.println("Average of marks are : "+obj.Aggregate_Avg());

  }
}