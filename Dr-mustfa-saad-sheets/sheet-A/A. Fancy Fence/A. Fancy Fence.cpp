#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		bool is = false;
		for (int j = 3; j <= 360; j++)
		{
			if (arr[i] * j == 180 * (j - 2))
			{
				is = true;
				cout << "YES\n";
				break;
			}
		}
		if (!is)
			cout << "NO\n";
	}
}