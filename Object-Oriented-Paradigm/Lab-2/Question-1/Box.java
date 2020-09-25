package Default;

public class Box {
	
		private double width;
		public double height;
		public double depth;


	public double volume() //Method for computing Volume
	{
		return(width*height*depth);
	}

	public void getwidth(int w)
	{
		width=w;
	}

}