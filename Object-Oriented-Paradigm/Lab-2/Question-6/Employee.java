package Sixth;

public class Employee {
	private long id;
	private String name;
	private double salary;
	Employee()
	{
		id=0;
		name="";
		salary=0;
	}
	Employee(String n,double s)
	{
		name=n;
		salary=s;
	}
	public String getName()
	{
		return name;
	}
	public double getSalary()
	{
		return salary;
	}
	public void raiseSalary(double n)
	{
		System.out.println("Salary after increasing is "+(salary*(n/100)+salary));
	}
}
