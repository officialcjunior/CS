package Fourth;

import java.util.Scanner;
public class TestOddAndEven {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		OddAndEven od=new OddAndEven();
		od.countOfEven=0;
		od.countOfOdd=0;
		String n,s;
		do {
			System.out.println("Enter the number");
			n=sc.nextLine();
			od.addNumber(Integer.parseInt(n));
			System.out.println("Want to stop or continue?");
			s=sc.nextLine();
		}while(s.equalsIgnoreCase("Q")==false);
			System.out.println(od.toString());
	}
}
