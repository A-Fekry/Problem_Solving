#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr1 = new int[n];
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
		arr2[i] = 0;
	bool is = true;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[j] == arr1[i])
				arr2[i]++;
		}
		if (arr2[i] > n / 2 && n % 2 == 0)
		{
			is = false;
			cout << "NO";
			break;
		}
		else if (arr2[i] > n / 2 + 1 && n % 2 != 0)
		{
			is = false;
			cout << "NO";
			break;
		}
	}

	if (is)
		cout << "YES";

}