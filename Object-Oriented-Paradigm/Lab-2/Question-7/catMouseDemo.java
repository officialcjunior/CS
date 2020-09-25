import Default2.animal;
import java.util.Scanner;
//T R Hari Subramaniam S3-CSE-A AM.EN.U4CSE19056
class catMouseDemo{
      
      public static void main(String args[])
      {
         Scanner sc=new Scanner(System.in);
         animal n=new animal();
         
         int cata=sc.nextInt();
         int catb=sc.nextInt();
         int m=sc.nextInt();
         
         n.cat_A=cata;
         n.cat_B=catb;
         n.mouse=m;
         n.catAndMouse();
      }
}

