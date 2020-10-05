package lab5;
import java.util.Scanner;

public class alphanumeric {
	static String strchk(String str)
	{
		String[] str2 = str.split("\\W+");
		String str3 = new String();
		for(int i = 0; i < str2.length;i++)
		{
	         str3 = str3+ str2[i];
	    }
		return  str3;
		
	}

	public static void main(String[] args) 
	{
		
		Scanner input= new Scanner(System.in);
		String str=input.next();
		String finalstr=new String();
		finalstr=strchk(str);
		System.out.println(finalstr);	

	}

}
