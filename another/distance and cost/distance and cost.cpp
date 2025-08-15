#include <iostream>

using namespace std;

struct ob {
	int min;
	int max;
};
int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int j = 0;
	ob* arr2 = new ob[n];
	arr2->min = { 0 };
	arr2->max = { 0 };

	for (int i = 0; i < n; i++)
	{
		if (i > 0 && i < n - 1)
		{
			if ((arr[i] - arr[i - 1]) <= (arr[i + 1] - arr[i]))
				arr2[i].min = arr[i] - arr[i - 1];
			else
				arr2[i].min = arr[i+1] - arr[i];


			if ((arr[i] - arr[0]) >= (arr[n - 1] - arr[i]))
				arr2[i].max = arr[i] - arr[0];
			else
				arr2[i].max = arr[n - 1] - arr[i];
		}

		else if (i == 0)
		{
			arr2[i].min = arr[i + 1] - arr[i];
			arr2[i].max = arr[n - 1] - arr[i];
		}

		else 
		{
			arr2[i].min = arr[i] - arr[i - 1];
			arr2[i].max = arr[n - 1] - arr[0];
		}

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr2[i].min << " " << arr2[i].max << endl;
	}
}