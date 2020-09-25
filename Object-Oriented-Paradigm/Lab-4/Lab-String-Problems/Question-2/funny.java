package Second;

import java.util.Scanner;
public class funny {
	static void funnyString(String s)
	   {
	      int l=s.length(),arr[]=new int[l-1],arr1[]=new int[l-1],i;
	      for(i=0;i<l-1;i++)
	      {
	        arr[i]=Math.abs(s.charAt(i)-s.charAt(i+1));
	        arr1[i]=Math.abs(s.charAt(l-i-1)-s.charAt(l-i-2));
	      }
	      for(i=0;i<l-1;i++)
	      {
	        if(arr[i]!=arr1[i])
	        {
	          System.out.println("Not funny");
	          break;
	        }
	      }
	      if(i==l-1)
	      System.out.println("Funny");
	      
	   }
	   public static void main(String args[])
	   {
	      Scanner sc=new Scanner(System.in);
	      String s=sc.nextLine();
	      funnyString(s);
	   }
}
