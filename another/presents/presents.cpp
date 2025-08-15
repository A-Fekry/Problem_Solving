#include <iostream>

using namespace std;

struct ob {
	int item;
	int index;
	int dis;
};

int main()
{
	int n, count = 1;
	cin >> n;
	ob* arr = new ob[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].item;
		arr[i].index = count;
		count++;
	}
	arr->dis = { 0 };
	for (int j = 0; j < n; j++)
	{
		arr[arr[j].item - 1].dis = arr[j].index;
	}
	for (int j = 0; j < n; j++)
	{
		cout << arr[j].dis << " ";
	}

}