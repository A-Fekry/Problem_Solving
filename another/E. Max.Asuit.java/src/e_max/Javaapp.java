package e_max;
import java.util.Scanner;
public class Javaapp {
	
	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		System.out.println("Enter the temp");
		float tempC = input.nextFloat();
		float tempF = (tempC * 9 / 5) + 32;
		System.out.println("Temp in F = " + tempF);
	}
}
