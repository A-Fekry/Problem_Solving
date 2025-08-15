#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	bool is = false;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] / 2 << endl;
		else
		{
			if (is)
			{
				is = false;
				if (arr[i] > 0)
					cout << arr[i] / 2 << endl;
				else
					cout << arr[i] / 2 - 1 << endl;
			}
			else
			{
				is = true;
				if (arr[i] > 0)
					cout << arr[i] / 2 + 1 << endl;
				else
					cout << arr[i] / 2 << endl;
			}
		}
	}

}