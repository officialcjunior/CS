package lab2;
import java.util.Scanner;

public class Box {
	
	Scanner obj = new Scanner(System.in);
	private double width;
	public double height;
	public double depth;
	
	Box(){
		width = 12;
		height = 27;
		depth = 34;
	}
	
	double volume() {
		return(width*height*depth);
	}
	
	void setDimension(double w,double h, double d) {
		width = w;
		height = h;
		depth = d;
	}
	
	double getWidth() {
		System.out.print("Enter the width: ");
		width = obj.nextDouble();
		return(width);
	}
}
