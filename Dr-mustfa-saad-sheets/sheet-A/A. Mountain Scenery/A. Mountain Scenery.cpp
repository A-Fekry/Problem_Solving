#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int* arr = new int[2 * n + 1];

	for (int i = 0; i <= 2 * n; i++)
		cin >> arr[i];
	int j = 1;
	for (int i = 0; i < k; )
	{
		if (arr[j] > 1 && arr[j] - 1 > arr[j - 1] && arr[j] - 1 > arr[j + 1])
		{
			arr[j] = arr[j] - 1;
			j += 2;
			i++;
		}
		else
			j += 2;
	}

	for (int i = 0; i <= 2 * n; i++)
	{
		if (i == 2 * n)
			cout << arr[i];
		else
			cout << arr[i] << " ";
	}
}