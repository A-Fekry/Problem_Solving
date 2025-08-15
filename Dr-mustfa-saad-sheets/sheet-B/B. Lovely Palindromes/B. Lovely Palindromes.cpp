#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	string str , str2;
	cin >> str;
	str2 = str;
	if (str.length() == 1)
		cout << str << str;
	else
	{
		char* arr = new char[str.length() + 1];
		strcpy(arr, str.c_str());

		for (int i = 0; i < str.length() ; i++)
			cout << arr[i];
		for (int i = str.length() - 1; i >= 0; i--)
			cout << arr[i];
	}

}