#include <iostream>

using namespace std;

int main()
{
	int n, b, d;
	cin >> n;
	cin >> b;
	cin >> d;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	static int count = 0 , j=0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= b)
			count += arr[i];
		if (count > d)
		{
			j++;
			count = 0;
		}
	}

	cout << j;

}