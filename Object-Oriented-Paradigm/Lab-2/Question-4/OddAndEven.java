package Fourth;

class OddAndEven {
	public int countOfOdd,countOfEven;
	public void addNumber(int n)
	{
		if(n%2==1)
			countOfOdd++;
		else
			countOfEven++;
	}
	public String toString()
	{
		return ("Number of Odd:"+ countOfOdd+", Number ofEven: "+countOfEven);
	}
}