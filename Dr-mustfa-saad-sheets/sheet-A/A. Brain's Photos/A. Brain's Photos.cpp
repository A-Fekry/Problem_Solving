#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	char** arr = new char*[n];
	for (int i = 0; i < n; i++)
		 arr[i] = new char[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i, j];
	}

	bool color = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M')
			{
				color = true;
			}
		}
	}

	if (color)
		cout << "#Color";
	else
		cout << "#Black&White";
}