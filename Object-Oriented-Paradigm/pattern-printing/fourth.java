import java.util.Scanner;

public class fourth {
	public static void pattern(int n)
	{
		int k=1;
		for(int i=1; i <= n; i++)
		{
			for(int j=1;j <= n ;j++)
			{
				System.out.print(k++ + " ");
			}
			System.out.println("");
		}
	}
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number:");
		
		int n = scan.nextInt();
		
		pattern(n); 
	}

}
