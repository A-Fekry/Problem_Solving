#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int* arr = new int[k];
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
		cout << " ";
	}
	cout << endl;

	int l = 0, m = 0;
	for (int i = 0; i < k; i++)
	{
		if (arr[i] < 0 && m == 0)
			l++;
		else
			m = m + arr[i];
	}
	cout << l;
}