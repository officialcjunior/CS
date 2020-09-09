package lab2;

import java.util.Scanner;

public class question5 {
	
	static String name;
	static String street;
	static String address;
	static String city;
	static int zip_code;

	public static void add() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter name, street, address, city and zip code");
		name = sc.nextLine();
		street = sc.nextLine();
		address = sc.nextLine();
		city = sc.nextLine();
		zip_code = sc.nextInt();		
	}
	
	public static void display () {
		System.out.println("Name: " + name + "\nStreet: " + street + "\nAddress: " + address + "\ncity" + city + "\nzip code"+ zip_code);
	}
}
