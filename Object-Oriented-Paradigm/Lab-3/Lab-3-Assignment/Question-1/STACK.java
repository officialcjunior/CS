package First;

public class STACK {
	public int top;
	public int siz;
	public int arr[]=new int[100];
	boolean IsEmpty(int top) 
	{
	  if(top<0)
	  return true;
	  else
	  return false;
	}
	void INSERT(int n)   //Helps to insert an element to the top of the array
	{
	    if(top>=siz-1)
	    System.out.println("Stack overflow");
	    else
	    {
	        top++;
	        arr[top]=n;
	    }
	}
	void PEEP()  //This prints the top most element of the array
	{
	    if(IsEmpty(top))
	    System.out.println("Stack is empty");
	    else
	    System.out.println("The  elements is "+arr[top]);   
	}
	void DELETE()  //This deletes the top most element of the array
	{
	   if(IsEmpty(top))
	   System.out.println("Stack is empty");
	   else
	   {
	     System.out.println("Deleting the element.");
	     top--;
	   }
	}  
	void DISPLAYDECK() //This displays the entire stack.
	{
		if(IsEmpty(top))
	    System.out.println("Stack is empty");
	    else
	    {
	        for(int i=top; i>=0; i--)
	        System.out.print(arr[i]+" ");
	        System.out.println();
	    }
	}	
}
