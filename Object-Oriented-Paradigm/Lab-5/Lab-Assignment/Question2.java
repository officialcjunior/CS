package lab5;

public class Question2 {
	
	public class Vector {
		public double a, b;
		
		Vector ()
		{
			a = 0;
			b = 0;
		}
	}
	
	class Calculator {
		
		Vector V3;
		
		Calculator() {
			
		}
		public int Add (int a, int b)
		{
			return a + b;
		}
		
		public double Add (double a, double b)
		{
			return a + b;
		}
		
		public Vector Add (Vector A, Vector B)
		{
			V3.a = A.a + B.a;
			V3.b = A.b + B.b;
			return V3;
		}
	}
	
	public static void main(String[] args) {
		Calculator Cr = new Calculator();
		System.out.println("Sum of 4 and 5 is " + Cr.Add(4,6));
		

	}
	

}
