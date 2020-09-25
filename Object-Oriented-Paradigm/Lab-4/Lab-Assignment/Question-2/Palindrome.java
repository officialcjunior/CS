package Second;

import java.util.Scanner;
import java.lang.String;
public class Palindrome {
	static boolean palindromeChecker(String s)
	{
		int start=0,end=s.length()-1;
		while(start<end)
		{
			if(s.charAt(start)==(s.charAt(end)))
			{
				start++;
			    end--;
			}
		}
		if(start==end)
			return true;
		else
			return false;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		System.out.println(palindromeChecker(s));
	}
}
