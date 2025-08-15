#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)


using namespace std;

int main()
{
	int a1, a2, a3, a4;
	cin >> a1;
	cout << " ";
	cin >> a2;
	cout << " ";

	cin >> a3;
	cout << " ";
	cin >> a4;
	cout << "\n";
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	string s;
	cin >> s;

	char* arr = new char[s.length() + 1];
	strcpy(arr, s.c_str());

	for (int i = 0; i <= s.length(); i++)
	{
		if (arr[i] == '1')
			n1++;
		else if
			(arr[i] == '2')
			n2++;
		else if (arr[i] == '3')
			n3++;
		else if (arr[i] == '4')
			n4++;
	}

	cout << a1 * n1 + a2 * n2 + a3 * n3 + a4 * n4;


}