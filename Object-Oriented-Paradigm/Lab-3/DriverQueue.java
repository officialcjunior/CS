package lab3;

import java.util.Scanner;

public class DriverQueue {
	public static void main(String args[]) {
		Queue object = new Queue();
		int choice;
		Scanner input = new Scanner(System.in);
		System.out.println("1. Register\n2. Delete\n3. Display\n4. Who is next\n5. Exit");

		do {
			System.out.println("Enter your choice");
			choice = input.nextInt();
			switch (choice) {
			case 1: {
				int element;
				System.out.println("Enter the element");
				element = input.nextInt();
				object.Register(element);
				break;
			}
			case 2: {
				object.Delete();
				break;
			}
			case 3: {
				object.DisplayQueue();
				break;
			}

			case 4: {
				object.WhoNext();
				break;
			}
			}
		} while (choice != 5);
	}
}
