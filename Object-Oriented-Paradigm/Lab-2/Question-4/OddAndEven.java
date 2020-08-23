
public class OddAndEven {
	int countofOdd,countofEven;
	
	public void addNumber(int n) {
		if(n%2!=0) {
			countofOdd += 1;
		}
		else {
			countofEven += 1;
		}
	}
	
	public String toString() {
		String str = "";
		str += "Number of Odd: ";
		str += countofOdd;
		str += "\nNumber of Even: ";
		str += countofEven;
		return str;
	}
}
