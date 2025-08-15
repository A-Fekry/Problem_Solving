#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, m;
	char ch;
	cin >> n >> m >> ch;
	set <char> sc;
	char** arr = new char*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	bool yes = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] != '.' && arr[i][j] != ch)
			{
				if (i > 0 && arr[i - 1][j] == ch)
					yes = true;
				else if (j > 0 && arr[i][j - 1] == ch)
					yes = true;
				else if (j < m - 1 && arr[i][j + 1] == ch)
					yes = true;
				else if (i < n - 1 && arr[i + 1][j] == ch)
					yes = true;

			}
			if (yes)
			{
				sc.insert(arr[i][j]);
				yes = false;
			}
		}
	}

	cout << sc.size();

}