import Default.Box;
//T R Hari Subramaniam S3-CSE-A AM.EN.U4CSE19056
public class Driver{

	public static void main(String[] args) {
		double vol;
		Box mybox = new Box();// Object Creation by invoking default constructor
		mybox.depth=10; // This is correct.We can access public data members in another class 
		mybox.height=20; // This is correct. By default data members access specifier is public
		//mybox1.width=30; // This is not correct. We cannot access private members outside a class
		mybox.getwidth(30);
		vol=mybox.volume();
		System.out.println("Volume is " + vol);
	}

}

