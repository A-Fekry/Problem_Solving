package e_max;
import java.util.Scanner;
public class Main {
	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		int N = input.nextInt();
		int arr[] = new int[N];
		for (int i = 0; i < N; i++)
		{
			arr[i] = input.nextInt(); 
		}
		int max = arr[0];
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		System.out.print(max);
	}
			
}
