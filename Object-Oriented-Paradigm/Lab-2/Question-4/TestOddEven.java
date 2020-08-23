import java.util.Scanner;


public class TestOddEven {

	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		OddAndEven myobj = new OddAndEven();
		String choice = "12";
		while(!choice.equals("Q")) {
			System.out.print("Enter a number or Enter Q to exit: ");
			choice = obj.next();
			if(!choice.equals("Q")) {
				int n = Integer.parseInt(choice);
				myobj.addNumber(n);
			}
			else {
				break;
			}
		}
		System.out.println(myobj.toString());		
	}

}
