package Third;

import java.util.Scanner;
public class driver {
	   public static void main(String args[])
	   {
	      Scanner sc=new Scanner(System.in);
	      System.out.println("Enter the real part and imaginary part of the 1st one");
	      float r1=sc.nextFloat();
	      float img1=sc.nextFloat();
	      System.out.println("Enter the real part and imaginary part of the 2nd one");
	      float r2=sc.nextFloat();
	      float img2=sc.nextFloat();
	      Complex com=new Complex(r1,img1,r2,img2);
	      com.add();
	      com.substract();
	   }
}
