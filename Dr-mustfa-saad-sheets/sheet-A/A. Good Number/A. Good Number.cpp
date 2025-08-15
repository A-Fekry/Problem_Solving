#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	set<int>* ob = new set<int>[n];
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		while (arr[i] > 0)
		{
			ob[i].insert(arr[i] % 10);
			arr[i] /= 10;
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int m = ob[i].size();
		for (int j = 0; j <= k; j++)
			ob[i].insert(j);

		if (ob[i].size() == m)
			count++;
	}
	cout << count;
}