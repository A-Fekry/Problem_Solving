#include <iostream>
#include <string>
#include <cstring>

#pragma warning(disable : 4996)

using namespace std;

int main()
{
	string s;
	cin >> s;
	char* arr = new char[s.length() + 1];
	strcpy(arr, s.c_str());
	int count = 0, j = 1;
	int k = 0;
	for (int i = 0; i < s.length() + 1;)
	{
		if (arr[i] == 'W' && arr[i + 1] == 'U' && arr[i + 2] == 'B')
		{

			if (j == 0)
				k++;

			j++;
			i += 3;
		}
		else
		{
			k++;
			i++;
			j = 0;
		}
	}
	char* arr2 = new char[k];
	k = 0;
	j = 1;
	for (int i = 0; i < s.length() + 1;)
	{
		if (arr[i] == 'W' && arr[i + 1] == 'U' && arr[i + 2] == 'B')
		{

			if (j == 0)
			{
				arr2[k] = '1';
				k++;
			}

			j++;
			i += 3;
		}
		else
		{
			arr2[k] = arr[i];
			i++;
			k++;
			j = 0;
		}
	}

	for (int i = 0; i < k - 1; i++)
	{
		if (arr2[i] == '1' && i != k - 2)
			cout << " ";
		else if (arr2[i] != '1')
			cout << arr2[i];
	}
}