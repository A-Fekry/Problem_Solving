#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k;
	cin >> k;
	int* arr1 = new int[n];
	long long* arr2 = new long long[n - k];
	int w = 0;
	arr2[0] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];

		if (i == k - 1)
		{
			for (int j = 0; j < k; j++)
				arr2[w] += arr1[j];
			w++;
		}
		else if (i >= k && w <= n - k)
		{
			arr2[w] = arr2[w - 1] + arr1[i] - arr1[(i) - k];
			w++;
		}
	}
	if (k == 1 && k < n)
	{
		int sum = 10000000;
		for (int i = 0; i < n; i++)
		{
			if (arr1[i] < sum)
			{
				sum = arr1[i];
				k = i;
			}
		}
		cout << k + 1;
	}
	else if (n - k == 1 && arr1[0] == arr1[n - 1])
		cout << 1;
	else if (n - k == 1 && arr1[0] >= arr1[n - 1])
		cout << 2;
	else if (n - k == 1 && arr1[0] < arr1[n - 1])
		cout << 1;
	else if(n == k)
		cout << 1;
	else if (n > k && k > 1)
	{
		int sum = 10000000;
		for (int i = 0; i < w; i++)
		{
			if (arr2[i] < sum)
			{
				sum = arr2[i];
				k = i;
			}
		}
		cout << k + 1;
	}
	
}