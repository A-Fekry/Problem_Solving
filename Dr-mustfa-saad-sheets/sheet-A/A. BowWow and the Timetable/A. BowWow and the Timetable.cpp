#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	string str;
	cin >> str;
	char* arr1 = new char[str.length() + 1];
	strcpy(arr1, str.c_str());
	int j = 0;
	int t = 0;
	int* arr2 = new int[str.length() + 1];
	for (int i = str.length(); i >= 0; i--)
	{
		arr2[i] = j;
		j++;
	}
	for (int i = 0; i < str.length() + 1; i++)
	{
		if (arr1[i] == '1')
		{
			t += arr2[i];
		}
	}
	if (t / 2 == (str.length() - 1) / 2)
		cout << (str.length() - 1) / 2;
	else
		cout << (str.length() - 1) / 2 + 1;
}