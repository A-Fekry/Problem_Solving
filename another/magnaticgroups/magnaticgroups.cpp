#include <iostream>

using namespace std;

int main()
{
	int k;
	cin >> k;
	int* arr = new int[k];

	for (int i = 0; i < k; i++)
		cin >> arr[i];

	int w = 0, count = 0;
	for (int j = 0; j < k; j++)
	{
		if (w != arr[j])
		{
			w = arr[j];
			count++;
		}
	}

	cout << count;

}