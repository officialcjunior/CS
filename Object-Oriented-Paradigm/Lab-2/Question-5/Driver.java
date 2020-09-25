package Fifth;

import java.util.Scanner;
public class Driver {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		AddressBook ad=new AddressBook();
		String name,street,city,state;
		int zipcode;
		System.out.println("Enter your name,street,city,state and zipcode");
		name=sc.nextLine();
		street=sc.nextLine();
		city=sc.nextLine();
		state=sc.nextLine();
		zipcode=sc.nextInt();
		ad.addAddress(name,street,city,state,zipcode);
		ad.Print();
	}
}
