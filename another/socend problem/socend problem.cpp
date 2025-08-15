// socend problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of games \n";
	cin >> n;

	int dank=0, anton=0;

	for (int i = 0; i < n; i++)
	{
		string h;
		cout << "enter who win the game number    " << i + 1<<"\n";
		cin >> h;

		if (h == "A")
			anton++;
		else
			dank++;


	}

	if (anton > dank)
		cout << "Anton" << "\n";
	else if (dank > anton)
		cout << "Danik" << "\n";
	else
		cout << "Friendship" << "\n";

}