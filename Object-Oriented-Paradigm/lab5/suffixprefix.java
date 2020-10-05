package lab5;

import java.util.Scanner;

public class suffixprefix {
	
	static void combine(String str1,String str2,int len )
	{
		String str3="";
		for(int i=0;i<len;i++)
		{
			str3=str3+str1.charAt(i);
		}
		for(int j=len;j<str2.length();j++)
		{
			str3+=str2.charAt(j);
		}
		System.out.println("the combined string:");
		System.out.print(str3);
		
	}

	public static void main(String[] args) {
		
		String str1,str2;
		Scanner in = new Scanner(System.in);   
	    System.out.println("Enter a string 1:");  
	    str1= in.nextLine();  
	    System.out.println("Enter a string 2:");
	    str2= in.nextLine();
	    System.out.println("Enter a suffix/prefix length:");
	    int len = in.nextInt();
	    combine(str1,str2,len);
	    
	}

}
