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

	int s = arr[0] , b = arr[0] ,count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > b)
			b = arr[i];
		if (arr[i] < s)
			s = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > s && arr[i] < b)
			count++;
	}
	cout << count;
}