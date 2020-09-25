import Default1.Person;
import java.util.Scanner;
//T R Hari Subramaniam S3-CSE-A AM.EN.U4CSE19056
public class demo{
       
       public static void main(String args[])
       {
          Scanner sc=new Scanner(System.in);
          Person myper=new Person();
          
          String s=sc.nextLine();
          myper.setName(s);
          myper.getName();
       }
}
          
