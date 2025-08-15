package BEvenNumbers;
import java.util.Scanner;
public class cc {

	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		int N = input.nextInt();
		if (N > 1)
		{
			for (int i = 2; i <= N; i += 2)
				System.out.println(i);
		}
		else
			System.out.println("-1");
	}
}
