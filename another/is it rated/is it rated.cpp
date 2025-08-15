#include <iostream>

using namespace std;

struct My
{
	int befor;
	int after;
	int differ;
};
int main()
{
	int n;
	cin >> n;

	My* arr = new My[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].befor >> arr[i].after;
	}
	bool order = true ,differ = false;

	for (int i = 0; i < n; i++)
	{
		arr[i].differ = arr[i].after - arr[i].befor;
		if (arr[i].differ != 0)
			differ = true;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i].befor < arr[i + 1].befor)
			order = false;
	}

	if (differ)
		cout << "rated";

	else if (!differ && !order)
		cout << "unrated";
	else
		cout << "maybe";
}