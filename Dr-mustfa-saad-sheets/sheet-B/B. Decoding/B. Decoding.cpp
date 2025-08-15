#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	char* arr1 = new char[n + 1];
	strcpy(arr1, str.c_str());
	char* arr2 = new char[n];
	int s = 0;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 != 0)
			{
				arr2[n / 2 + s] = arr1[i];
				s++;
			}
			else
				arr2[n / 2 - 1 - s] = arr1[i];
		}
	}

	else
	{
		arr2[n / 2] = arr1[0];
		for (int i = 1; i < n; i++)
		{
			if (i % 2 == 0)
			{
				arr2[n / 2 + 1 + s] = arr1[i];
				s++;
			}
			else
				arr2[n / 2 - 1 - s] = arr1[i];
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr2[i];
}