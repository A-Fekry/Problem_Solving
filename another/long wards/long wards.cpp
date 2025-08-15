#include <iostream>
#include <string>
#include <cstring>

#pragma warning(disable : 4996)

using namespace std;

int main()
{
	int n;
	cin >> n;

	string* arr1 = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr1[i].length() > 10)
		{
			char* arr = new char[arr1[i].length() + 1];
			strcpy(arr, arr1[i].c_str());
			cout << arr[0] << arr1[i].length() - 2 << arr[arr1[i].length() - 1] << endl;

		}

		else
			cout << arr1[i] << endl;
	}

}