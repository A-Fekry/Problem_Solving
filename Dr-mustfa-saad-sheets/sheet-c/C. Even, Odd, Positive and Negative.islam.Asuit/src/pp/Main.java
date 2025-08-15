package pp;
import java.util.Scanner;
public class Main {

	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		int n = input.nextInt();
		int arr[] = new int[n];
		int countpos = 0;
		int countneg = 0;
		int countodd = 0;
		int counteve = 0;
		for (int i = 0; i < n;i++)
		{
			arr[i] = input.nextInt();
			if (arr[i] % 2 == 0)
				counteve++;
			else 
				countodd++;
			
			if (arr[i] > 0)
				countpos++;
			else if (arr[i] < 0)
				countneg++;
		}
		
		System.out.println("Even: " + counteve);
		System.out.println("Odd: " + countodd);
		System.out.println("Positive: " + countpos);
		System.out.println("Negative: " + countneg);
	}
}
