#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

bool isthere(char arr[],int s, char n);
int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	char* arrc = new char[n];
	int* arri = new int[n];

	strcpy(arrc, s.c_str());
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		j++;
		arri[i] = j;
	}
	if (isthere(arrc, n, 'R'))
	{
		for (int i = 0; i < n; i++)
		{
			if (arrc[i] == 'R')
			{
				cout << arri[i];
				break;
			}
		}
		cout << " ";
		for (int i = n - 1; i >= 0; i--)
		{
			if (arrc[i] == 'R')
			{
				cout << arri[i] + 1;
				break;
			}
		}
	}

	else
	{
		for (int i = n - 1; i >= 0; i--)
		{
			if (arrc[i] == 'L')
			{
				cout << arri[i];
				break;
			}
		}
		cout << " ";

		for (int i = 0; i < n; i++)
		{
			if (arrc[i] == 'L')
			{
				cout << arri[i] - 1;
				break;
			}
		}
	}
}

bool isthere(char arr[], int s, char n)
{
	bool k = false;
	for (int i = 0; i < s; i++)
	{
		if (n == arr[i])
		{
			k = true;
			break;
		}
	}
	return k;
}
