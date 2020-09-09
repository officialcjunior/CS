package lab2;

public class Employee {
	long id;
	String name;
	double salary;
	Employee () {
		name="";
		salary=0;
	}
	Employee (String nam, double sal)  {
		name = nam;
		salary = sal;
	}
	public String getname () {
		return name;
	}
	public Double getsalary () {
		return salary;
	}
	void raiseSalary (double byPercent ) {
		salary += salary * 10 / 100;
	}
	
}
