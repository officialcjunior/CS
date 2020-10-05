package lab5;
import java.util.*;
class TollBooth {
	static int ctr_heavy = 0, ctr_medium = 0, ctr_light = 0;
	static int heavy = 0, medium = 0, light = 0;
	private static Scanner sc;
	
	private static void DisplayMenu()
	{
		System.out.println("Choose vehicle type: ");
		System.out.println("\t 1. Heavy vehicle ");
		System.out.println("\t 2. Medium Vehicle ");
		System.out.println("\t 3. Light Vehicle ");
	}
	
	public static void BillVehicle() {
		System.out.println("Select vehicle type that paid toll: ");
		DisplayMenu();
		sc = new Scanner(System.in); 
		int choice = sc.nextInt();
		if (choice == 1)
			ctr_heavy++;
		else if (choice == 2)
			ctr_medium ++;
		else if (choice == 3)
			ctr_light ++;
		else 
			System.out.println("Invalid Choice.");
	}
	
	public static void Bypass(){
		System.out.println("Select vehicle type that left without paying toll: ");
		DisplayMenu();
		sc = new Scanner(System.in); 
		int choice = sc.nextInt();
		if (choice == 1)
			heavy++;
		else if (choice == 2)
			medium ++;
		else if (choice == 3)
			light ++;
		else 
			System.out.println("Invalid Choice.");
	}
	
	public static int TollHeavy(int n)
	{
		return n * 50;
	}
	
	public static int TollMedium(int n)
	{
		return n * 20;
	}
	
	
	public static int TollLight(int n)
	{
		return n * 10;
	}
	
	public static int getTotalVehicleCount() {
		return heavy + light + medium + ctr_light + ctr_heavy + ctr_medium;
	}
	
	public static int getCollectedAmount() {
		return TollLight(ctr_light) + TollHeavy(ctr_heavy) + TollMedium(ctr_medium);
	}
	
	public static int getLoss() {
		return TollLight(light) + TollHeavy(heavy) + TollMedium(medium);
	}
	
	public static void getVehicleStats()
	{
		System.out.println("VEHICLE STATISTICS");
		System.out.println("Light Vehicles Passed: " + ctr_light + light);
		System.out.println("Medium Vehicles Passed: " + ctr_medium + medium);
		System.out.println("Heavy Vehicles Passed: " + ctr_heavy + heavy);
		System.out.println("\nTOTAL Vehicles Passed: " + getTotalVehicleCount());
	}
	
	public static void getAmountStats()
	{
		System.out.println("\nREVENUE STATISTICS");
		System.out.println("Light Vehicles : " + TollLight(ctr_light));
		System.out.println("Medium Vehicles : " + TollMedium(ctr_medium));
		System.out.println("Heavy Vehicles : " + TollHeavy(ctr_heavy));
	}
	
	public static void GenerateReport() {
		getVehicleStats();
		getAmountStats();
		System.out.println("\nTotal Amount Collected: " + getCollectedAmount());
		System.out.println("\nTotal Loss Amount: " + getLoss());
	}
	
}

public class Question1 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while (true) {
			System.out.println("Select Option: \n\t1. Vehicle Pass \n\t2. Vehicle Skip \n\t3. Generate Report \n\t4.Exit");
			int ch;
			ch = sc.nextInt();
			switch (ch) {
				case 1: TollBooth.BillVehicle();
						break;
				case 2: TollBooth.Bypass();
						break;
				case 3: TollBooth.GenerateReport();
					break;
			}
		}
		
	}

}
