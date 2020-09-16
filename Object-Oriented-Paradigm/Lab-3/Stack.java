package lab3;

public class Stack {
	static int stack[];
	static int top;

	Stack() {
		stack = new int[30];
		top = -1;
	}

	public void Insert(int element) {
		top++;
		stack[top] = element;
	}

	public void DisplayDeck() {
		System.out.println("Deck status");
		for (int i = top; i >= 0; i--)
			System.out.printf("%d ", stack[i]);
		System.out.println("");
	}

	public void Peep() {
		System.out.printf("Element when peeped is %d", stack[top]);
	}

	public void Delete() {
		System.out.printf("Deleting element: %d \n", stack[top]);
		top--;
	}

}
