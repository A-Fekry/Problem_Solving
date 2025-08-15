#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	char** arr = new char*[n];
	for (int i = 0; i < n; i++)
		arr[i] = new char[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	bool dia = true, els = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i || j + i == n - 1)
			{
				if (arr[i][j] != arr[0][0])
					dia = false;
			}
			else
				if (arr[i][j] != arr[0][1])
					els = false;
		}
	}
	if (dia == false || els == false)
		cout << "NO";
	else
		cout << "YES";
}
