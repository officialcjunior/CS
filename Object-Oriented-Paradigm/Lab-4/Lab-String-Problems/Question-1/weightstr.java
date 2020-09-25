package First;

import java.util.Scanner;
public class weightstr {
	static void weightedString(String s)
	   {
	      Scanner sc=new Scanner(System.in);
	      int l=s.length();
	      int arr[]=new int[l],i=0;
	      arr[i]=(int)(s.charAt(0)-'a')+1;
	      for(i=1;i<l;i++)
	      {
	         arr[i]=(int)(s.charAt(i)-'a')+1;
	         if(s.charAt(i)==s.charAt(i-1))
	         arr[i]=arr[i-1]+(int)(s.charAt(i)-'a')+1;
	         
	      }
	      int n=sc.nextInt();
	      int j,arr1[]=new int[n];
	      for(i=0;i<n;i++)
	      arr1[i]=sc.nextInt();
	      for(i=0;i<n;i++)
	      {
	         for(j=0;j<l;j++)
	         {
	           if(arr1[i]==arr[j])
	           {
	              System.out.println("Yes");
	              break;
	           }
	         }
	         if(j==l)
	         System.out.println("No");
	      }
	   }
	   public static void main(String args[])
	   {
	      Scanner sc=new Scanner(System.in);
	      String s=sc.nextLine();
	      s=s.toLowerCase();
	      weightedString(s);
	   }
}