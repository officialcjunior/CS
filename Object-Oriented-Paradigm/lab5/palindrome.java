package lab5;
import java.util.Scanner;

public class palindrome {
	
	static void palinchk(String str)
	{
		String reverse="";
		int length = str.length();   
	    for ( int i = length - 1; i >= 0; i-- )  
	    	reverse = reverse + str.charAt(i);
	    
	    if (str.equals(reverse))  
	         System.out.println("Entered string is a palindrome.");  
	      else  
	         System.out.println("Entered string isn't a palindrome.");
	}

	public static void main(String[] args) {

		 Scanner input = new Scanner(System.in);   
	     System.out.println("Enter a string to check if it is a palindrome:");  
	     String str= input.nextLine();  
	     palinchk(str);
	     

	}

}
