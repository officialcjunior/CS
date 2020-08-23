package lab2;

public class boxDemo {

	public static void main(String[] args) {
		Box mybox = new Box();
		
		double width = mybox.getWidth();
		width = 10;
		mybox.height = 11;
		mybox.depth = 12;
		
		double vol = mybox.depth*mybox.height*width;
		System.out.println(vol);
		double func_vol = mybox.volume();
		System.out.println(func_vol);
		mybox.setDimension(10,12,43);
		System.out.println(width);
		System.out.println(mybox.height);
		System.out.println(mybox.depth);
		

	}

}
