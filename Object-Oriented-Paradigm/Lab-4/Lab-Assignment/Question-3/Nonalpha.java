package Third;

import java.util.Scanner;
import java.lang.String;
public class Nonalpha {
	static String alphaAndNum(String s)
	{
		String st="";
		for(int i=0;i<s.length();i++)
		{
			if(Character.isLetterOrDigit(s.charAt(i)))
				st+=s.charAt(i);
		}
		return st;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		System.out.println(alphaAndNum(s));
	}	
}
