package lab3;

import java.util.Scanner;

public class lab3_angelic_tree {
	static int n;

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		Tree obj = new Tree();

		n = input.nextInt();

		obj.currentHeight(n);
		System.out.println(obj.getHeight());

	}
}
