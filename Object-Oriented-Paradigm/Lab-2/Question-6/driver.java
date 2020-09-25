package Sixth;

import java.util.Scanner;
public class driver {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the name,salary and the raise percentage");
		String s=sc.nextLine();
		double d=sc.nextDouble();
		double n=sc.nextInt();
		Employee emp=new Employee(s,d);
		System.out.println("Name:- "+emp.getName());
		System.out.println("Salary:- "+emp.getSalary());
		emp.raiseSalary(n);
	}
}
