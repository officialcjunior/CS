package lab3;

import java.util.Scanner;

public class DriverStack {
	public static void main(String args[]) {
		Stack object = new Stack();
		int choice = 0;
		Scanner input = new Scanner(System.in);
		System.out.println(" 1.Insert \n 2.Peep\n 3.Delete \n 4.Display Stack \n 5.Quit");

		do {
			System.out.println("Enter your choice");
			choice = input.nextInt();
			switch (choice) {
			case 1: {
				int element;
				System.out.println("Enter the element");
				element = input.nextInt();
				object.Insert(element);
				break;
			}
			case 2: {
				object.Peep();
				break;
			}
			case 3: {
				object.Delete();
				break;
			}

			case 4: {
				object.DisplayDeck();
				break;
			}
			}
		} while (choice != 5);
		//
	}
}
