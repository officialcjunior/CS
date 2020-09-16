package lab3;

public class Queue {
	static int queue[], rear, front;

	Queue() {
		queue = new int[30];
		rear = 0;
		front = 0;
	}

	public void Register(int element) {
		queue[rear++] = element;
		System.out.printf("Entering vehicle number %d at position %d \n", element, rear);
	}

	public void DisplayQueue() {
		System.out.println("Queue status: ");
		for (int i = front; i < rear; i++)
			System.out.printf("%d ", queue[i]);
		System.out.println("");
	}

	public void WhoNext() {
		System.out.printf("Next vechicle on the list is %d \n", queue[front]);
	}

	public void Delete() {
		System.out.printf("Deleting vehicle number %d at position %d \n", queue[front], front + 1);
		front++;
	}

}
