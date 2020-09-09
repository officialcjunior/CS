package lab2;

import java.util.Scanner;

public class question6 {
		public static void main (String args[]) {
			Employee harry = new Employee ("Hacker, Harry", 55000);		
			harry.raiseSalary(10);
			System.out.println(harry.getname());			
			System.out.println(harry.getsalary());
	}	
}

