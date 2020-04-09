#include <stdio.h>

#define max_size 100

int choice=0, rear=0, front=0, queue[max_size],car_no;

void REGISTER ()
{
	puts("Enter your vehicle number");
	scanf("%d", &car_no);	
	if (rear==max_size)
		puts("Queue overflow");
	else
	{	
		printf("Entering vehicle number %d at position %d",car_no,rear+1);
		queue[rear++]=car_no;
		puts("");
	}
}

void DELETE()
	{
		if (front==rear)
			puts("Queue underflow");
		else
			printf("Deleting vehicle number %d at position %d \n",queue[front],front+1); 
			front++;
	}

void DISPLAYQUEUE()
	{
		puts("Current queue of vehicles :");
		for (int i=front;i<rear;i++)
			printf("%d ", queue[i]);
		puts("");
	} 

void WHONEXT()
	{
		printf("The vehicle number of the car waiting is %d \n", queue[front]);
	}
int main ()
{

	do
	{
		puts("Welcome to the Car service. Please select an option");
		puts("1. Register\n2. Next customer\n3. Delete\n4. Display\n5. Exit");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1: REGISTER();break;
			case 2: WHONEXT();break;
			case 3: DELETE();break;
			case 4: DISPLAYQUEUE();break;
			default: puts("Enter a valid choice");
		}

	} while (choice!=5);

	return 0;
}