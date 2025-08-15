#include <iostream>

using namespace std;

int main()
{
	char arr1[16];
	for (int i = 0; i < 16; i++)
		cin >> arr1[i];
	bool is = false;
	int arr2[16];
	for (int i = 0; i < 16; i++)
	{
		if (arr1[i] == arr1[0])
			arr2[i] = 0;
		else
			arr2[i] = 1;
	}
	for (int i = 0; i < 11;)
	{
		if (i == 3 || i == 7)
			i++;
		else
		{
			int c = 0;
			if (arr2[i + 1] == arr2[i])
				c++;
			if (arr2[i + 4] == arr2[i])
				c++;
			if (arr2[i + 5] == arr2[i])
				c++;

			if (c == 2 || c == 0 || c == 3)
			{
				is = true;
				break;
			}
			else
				i++;
		}
	}
	if (is)
		cout << "YES";
	else
		cout << "NO";

}