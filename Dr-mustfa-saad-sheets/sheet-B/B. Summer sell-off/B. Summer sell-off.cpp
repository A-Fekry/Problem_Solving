#include <iostream>

using namespace std;
struct ob {
	int ki;
	int li;
	int dif;
	int add;
};
static void quickSort(ob arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[high].add;
		int i = (low - 1);

		for (int j = low; j < high; j++) {
			if (arr[j].add < pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}
		swap(arr[i + 1], arr[high]);
		int pi = i + 1;

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);

	}
}
int main()
{
	int n, f;
	cin >> n >> f;
	ob* arr = new ob[n];
	bool is = true;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].ki;
		cin >> arr[i].li;
		if (arr[i].ki > arr[i].li)
			arr[i].dif = arr[i].li;
		else
			arr[i].dif = arr[i].ki;
		if (arr[i].ki * 2 > arr[i].li)
			arr[i].add = arr[i].li - arr[i].dif;
		else
			arr[i].add = arr[i].ki * 2 - arr[i].dif;
		if (arr[i].li > arr[i].ki)
			is = false;
	}
	long long sum = 0, w = 0;

	if (f > 0 && f < n && !is)
	{
		quickSort(arr, 0, n - 1);
		for (int i = n - 1; i >= 0; i--)
		{
			if (f > 0)
			{
				f--;
				sum += arr[i].add;
			}
			sum += arr[i].dif;
		}
	}
	else if (f == n)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			sum += arr[i].add;
			sum += arr[i].dif;

		}
	}

	else
	{
		for (int i = n - 1; i >= 0; i--)
			sum += arr[i].dif;
	}

	cout << sum;
}