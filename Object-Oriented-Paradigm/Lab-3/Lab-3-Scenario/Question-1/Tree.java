package Oneanonly;

class Tree {
	private int height;
	public Tree()
	{
		height=1;
	}
	public void setheight(int h)
	{
		this.height=h;
	}
	public int getheight()
	{
		return height;
	}
	public int currentHeight(int n)
	{
		int i=0;
		while(i<n)
		{
			if(i%2==0)
				height+=2;
			else
				height*=3;
			i++;
			
		}
		return height;
	}
}
