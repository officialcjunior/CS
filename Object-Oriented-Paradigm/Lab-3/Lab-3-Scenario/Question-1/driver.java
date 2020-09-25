package Oneanonly;

import java.util.Scanner;
public class driver {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		Tree te=new Tree();
		te.setheight(1);
		System.out.println(te.currentHeight(n));
		
	}
}
