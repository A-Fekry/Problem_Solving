#include <iostream>

using namespace std;

int main()
{
	int n, a;
	cin >> n >> a;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int i = a - 1, j = a - 1, k = 0, w = 0 , c = 0;
	while (i >= 0 || j < n)
	{
		k = 0;
		w = 0;
		if (i >= 0 && arr[i] == 1)
			k = 1;
		if (j < n && arr[j] == 1)
			w = 1;

		if (i >= 0 && j < n)
		{
			if (k + w == 2)
				c += 2;
		}
		else
		{
			if (k + w)
				c++;
		}
		i--;
		j++;

	}

	if (arr[a - 1] == 1)
		cout << c - 1;
	else
		cout << c;
}