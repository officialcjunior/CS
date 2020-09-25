package Second;

public class Queue {
	
	public int rear,front,n=100;
	public int Queue[]=new int[100];
	public boolean IsEmpty()
	{
		if(front==-1 && rear==-1)
			return true;
		else
			return false;
	}
	public void INSERT(int x)
	{
		if(rear==n-1)
			System.out.println("Queue is full");
		else if(IsEmpty())
		{
			front=0;
			rear=0;
			Queue[rear]=x;
		}
		else
		{
			rear=rear+1;
			Queue[rear]=x;
		}
	}
	public void DELETE()
	{
		if(IsEmpty())
			System.out.println("No one is left");
		else if(front==rear)
		{
			rear=-1;
			front=-1;
		}
		else
			front=front+1;
	}
	public void WHONEXT()
	{
		if(IsEmpty())
			System.out.println("No one is left");
		else
			System.out.println(Queue[front]);
	}
	public void DISPLAYQUEUE()
	{
		if(IsEmpty())
		    System.out.println("No one is left");
		else
		{
		     for(int i=front; i>=0; i--)
		     System.out.print(Queue[i]+" ");
		     System.out.println();
		}
	}
}
