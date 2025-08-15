#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of games \n";
	cin >> n;

	int dank = 0, anton = 0;
	string h;
	cin >> h;
	const int i = h.length() + 1;
	char* arr = new char[i];
	strcpy (arr, h.c_str());
	for (int i = 0; i < n; i++)
	{
		

		if (arr[i] == 'A')
			anton++;
		else
			dank++;


	}

	delete[]arr;

	if (anton > dank)
		cout << "Anton" ;
	else if (dank > anton)
		cout << "Danik";
	else
		cout << "Friendship";

}