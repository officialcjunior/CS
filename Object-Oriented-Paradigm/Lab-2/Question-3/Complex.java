package Third;

class Complex {
	private float realPart;
	private float imaginaryPart;
	private float realPart1;
	private float imaginaryPart1;
	public Complex()
	{
		realPart=0.0f;
		imaginaryPart=0.0f;
		realPart1=0.0f;
		imaginaryPart1=0.0f;
	}
	public Complex(float real,float imaginary,float real1,float imaginary1)
	{
		realPart=real;
		imaginaryPart=imaginary;
		realPart1=real1;
		imaginaryPart1=imaginary1;
	}
	public void add()
	{
		System.out.println("The sum is "+(realPart+realPart1)+"+i"+(imaginaryPart+imaginaryPart1));
	}
	public void substract()
	{
		System.out.println("The sum is "+(realPart-realPart1)+"+i"+(imaginaryPart-imaginaryPart1));
	}
}
