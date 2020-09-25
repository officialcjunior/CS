package Q1;

import java.util.Scanner;
public class Presfix {
	public static String prefixSuffix(String a,String b,int limit)
	{
		String s3=a.substring(0,limit)+b.substring(b.length()-limit);
		return s3;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String a=sc.nextLine();
		String b=sc.nextLine();
		int n=sc.nextInt();
		System.out.println(prefixSuffix(a,b,n));
	}
}
