package lab5;

import java.util.Scanner;

public class tollbooth {
	
	static int heavy=0;
	static int heavyamount=0;
	static int medium=0;
	static int mediumamount=0;
	static int twowheel=0;
	static int twowheelamount=0;
	static int totalno=0;
	static int unpaid=0;
	static int unpaidamt=0;
	
	public static void main(String[] args) {

		int y,x,option,paid;
		Scanner input= new Scanner(System.in);
		System.out.println("Enter the informayion about the toolbooth");
		do
		{
			System.out.println("Enter: 1 for Heavy Vehicles- 4 wheeler- Rs 50\n 2 for Medium Vehicle- 4 Wheeler - Rs 20 \n 3 for Two wheeler- Rs 10\n");
			option=input.nextInt();
			switch(option)
			{
				case 1:
					System.out.println("if paid vehicle,enter 1 else enter 2");
					paid=input.nextInt();
					if(paid==1)
					{
						totalno+=1;
						heavy+= 1;
						heavyamount +=50;
						
					}
					else
					{
						unpaid+=1;
						unpaidamt+=50;
						totalno+= 1;	
						heavy+=1;
					}
					break;
				case 2:
					System.out.println("if paid vehicle,enter 1 else enter 2");
					paid=input.nextInt();
					if(paid==1)
					{
						totalno += 1;
						medium += 1;
						mediumamount += 20;
						
					}
					else
					{
						totalno += 1;	
						unpaid += 1;
						unpaidamt+=20;
						medium += 1;
					}
					break;
				case 3:
					System.out.println("if paid vehicle,enter 1 else enter 2");
					paid=input.nextInt();
					if(paid==1)
					{
						totalno += 1;
						twowheel += 1;
						twowheelamount += 10;
						
					}
					else
					{
						unpaid += 1;
						unpaidamt+=10;
						totalno += 1;	
						twowheel += 1;
					}
					break;
					
					
			}
			
			
			 System.out.println("Do you want to continue entering - 1 or 0?");
		        y=input.nextInt();
		    } while (y==1);
		
		do
		{
			System.out.println("Enter: 1 for Total number of vehicles passing the bridge \n"
					+ " 2 for Total Amount of money collected for all the vehicles per day \n "
					+ "3 for Total number of vehicles who passed without paying toll\n"
					+ " 4 for number of vehicles from each category of Vehicle\n 5 for Amount of money collected separately from each category of Vehicle\n"
					+ " 6 for The lose of amount on that day as some vehicles did not pay\n");
			
			option=input.nextInt();
			switch(option)
			{
				case 1: 
					System.out.println("Total no. of vehicles:");
					System.out.println(heavy+medium+twowheel);
					break;
				case 2:
					System.out.println("Total amount of money for all the vehicles:");
					System.out.println(heavyamount+mediumamount+twowheelamount);
					break;
				case 3:
					System.out.println("Total number of vehicles who passed without paying toll :");
					System.out.println(unpaid);
					break;
				case 4:
					System.out.println("Total number of vehicles from each category of Vehicle:");
					System.out.print("heavy vehicles:");
					System.out.println(heavy);
					System.out.print("medium vehicles:");
					System.out.println(medium);
					System.out.print("two wheelers:");
					System.out.println(twowheel);
					break;
				case 5:
					System.out.println(" Amount of money collected separately :");
					System.out.print("heavy vehicles:");
					System.out.println(heavyamount);
					System.out.print("medium vehicles:");
					System.out.println(mediumamount);
					System.out.print("two wheelers:");
					System.out.println(twowheelamount);
					break;
				case 6:
					System.out.println(" The lose of amount on that day:");
					System.out.println(unpaidamt);
					break;	
			}
					
				
				System.out.println("Do you want to continue entering - 1 or 0?");
				x=input.nextInt();
					
			
		}while(x==1);
		
		
		

	

}
}
		
