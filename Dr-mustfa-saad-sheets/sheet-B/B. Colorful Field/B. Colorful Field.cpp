#include <iostream>

using namespace std;

struct op {
	int i;
	int j;
};
static void quickSort(op arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[high].i;
		int i = (low - 1);

		for (int j = low; j < high; j++) {
			if (arr[j].i < pivot) {
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
	int n, m, k, t;
	cin >> n >> m >> k >> t;
	op* arr1 = new op[k];
	for (int i = 0; i < k; i++)
	{
		cin >> arr1[i].i;
		cin >> arr1[i].j;

	}
	
	op* arr2 = new op[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr2[i].i;
		cin >> arr2[i].j;

	}
	quickSort(arr1, 0, k - 1);
	bool is = false;
	int x = 0;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (arr1[j].j == arr2[i].j && arr1[j].i == arr2[i].i)
			{
				is = true;
				break;
			}
			else if (arr1[j].i > arr2[i].i)
				break;
			else if (arr1[j].i < arr2[i].i)
				x++;
			else if (arr1[j].i == arr2[i].i && arr1[j].j < arr2[i].j)
				x++;
		}
		if (is)
			cout << "Waste\n";
		else
		{
			if (((arr2[i].i - 1) * m + arr2[i].j - x) % 3 == 1)
				cout << "Carrots\n";
			else if (((arr2[i].i - 1) * m + arr2[i].j - x) % 3 == 2)
				cout << "Kiwis\n";
			else
				cout << "Grapes\n";
		}
		x = 0;
		is = false;
	}
}