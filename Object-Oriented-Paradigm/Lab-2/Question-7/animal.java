package q7;
import java.util.Scanner;

public class animal {
	
	Scanner obj = new Scanner(System.in);
	
	int cat_A;
	int cat_B;
	int mouse;
	
	animal(){
		System.out.println("Enter the coordinates of cat_A,cat_B and mouse respectively: ");
		cat_A = obj.nextInt();
		cat_B = obj.nextInt();
		mouse = obj.nextInt();
	}
	
	void CatAndMouse() {
		int diff_A = cat_A-mouse;
		if(diff_A < 0) {
			diff_A = (-diff_A);
		}
		int diff_B = cat_B-mouse;
		if(diff_B < 0) {
			diff_B = (-diff_B);
		}
		
		if(diff_A < diff_B) {
			System.out.println("Cat A");
		}
		
		else if(diff_B < diff_A) {
			System.out.println("Cat B");
		}
		
		else if(diff_A == diff_B) {
			System.out.println("Mouse");
		}
	}
}
