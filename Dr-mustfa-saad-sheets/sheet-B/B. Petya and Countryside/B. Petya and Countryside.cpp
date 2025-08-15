#include <iostream>

using  namespace std;

int main()
{

	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int c1 = 0, c2 = 0, i1 = 0, i2 = 0;
	for (int i = 0; i < n; i++)
	{
		i1 = arr[i];
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] <= i1)
			{
				c1++;
				i1 = arr[j];
			}
			else
				break;
		}
		i2 = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] <= i2)
			{
				c1++;
				i2 = arr[j];
			}
			else
				break;
		}

		if (c1 > c2)
			c2 = c1;
		c1 = 0;
	}
	cout << c2 + 1;
}