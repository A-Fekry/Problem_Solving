package com;
import java.util.Scanner;
public class Main {

	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		int num = input.nextInt();
		int x = 0;
		for (int i = 0;i <num; i++)
		{
			String state = input.next();
			if (state.contains("++"))
					x++;
			else
				x--;
		}
		
		System.out.println(x);

	}

}
