package Second;

import java.util.Scanner;
class driver {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		Queue st=new Queue();
	    int x,cho;
	    st.rear=-1;
	    st.front=-1;
	    System.out.println("1.Register\n 2.Who Next\n3.Delete\n4.Display all");
	    do
	    {
	        System.out.println("Enter the Choice:");
	        cho=sc.nextInt();
	        switch(cho)
	        {
	            case 1:
	            {
	            	System.out.println(" Enter the car number:");
	    	        x=sc.nextInt();
	                st.INSERT(x);
	                break;
	            }
	            case 2:
	            {
	                st.WHONEXT();
	                break;
	            }
	            case 3:
	            {
	                st.DISPLAYQUEUE();
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
