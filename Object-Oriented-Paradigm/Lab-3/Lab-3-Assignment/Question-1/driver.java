package First;

import java.util.Scanner;
public class driver {
	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		STACK st=new STACK();
	    int x;
	    System.out.println("Enter the size of Stack size.(Here max size is 100):");
	    int n=sc.nextInt(),cho;
	    st.arr=new int[n];
	    st.siz=n;
	    st.top=-1;
	    System.out.println("1.Push\n 2.Peek\n3.PrintStack\n4.Pop\n5.Stopping");
	    do
	    {
	        System.out.println("Enter the Choice:");
	        cho=sc.nextInt();
	        switch(cho)
	        {
	            case 1:
	            {
	            	System.out.println(" Enter a value to be inserted:");
	    	        x=sc.nextInt();
	                st.INSERT(x);
	                break;
	            }
	            case 2:
	            {
	                st.PEEP();
	                break;
	            }
	            case 3:
	            {
	                st.DISPLAYDECK();
	                break;
	            }
	            case 4:
	            {
	                st.DELETE();
	                break;
	            }
	            case 5:
	            {
	                System.out.println("Thank you");
	                break;
	            }
	            default:
	            {
	                System.out.println("Please enter a valid choice");
	            }
	                 
	        }
	    }
	    while(cho!=5);
	}
}
