#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
struct op {
	int v1;
	int v2;
};
struct ob {
	int num;
	double rate;
};

static void quickSort(ob arr[], int low, int high) {
	if (low < high) {
		double pivot = arr[high].rate;
		int i = (low - 1);

		for (int j = low; j < high; j++) {
			if (arr[j].rate < pivot) {
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
static void quickSort1(ob arr[], int low, int high) {
	if (low < high) {
		double pivot = arr[high].num;
		int i = (low - 1);

		for (int j = low; j < high; j++) {
			if (arr[j].num > pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}
		swap(arr[i + 1], arr[high]);
		int pi = i + 1;

		quickSort1(arr, low, pi - 1);
		quickSort1(arr, pi + 1, high);
	}
}
int main()
{
	int n, t1, t2, k;
	cin >> n >> t1 >> t2 >> k;
	op* arr1 = new op[n];
	ob* arr2 = new ob[n];
	for (int i = 0; i < n; i++)
		cin >> arr1[i].v1 >> arr1[i].v2;

	for (int i = 0; i < n; i++)
	{
		arr2[i].num = i + 1;
		double m;
		m = t1 * max(arr1[i].v1, arr1[i].v2) - t1 * max(arr1[i].v1, arr1[i].v2) * (k / static_cast<double>(100)) + t2 * min(arr1[i].v1, arr1[i].v2);
		if (m < (t1 * min(arr1[i].v1, arr1[i].v2) - t1 * min(arr1[i].v1, arr1[i].v2) * (k / static_cast<double>(100)) + t2 * max(arr1[i].v1, arr1[i].v2)))
			m = t1 * min(arr1[i].v1, arr1[i].v2) - t1 * min(arr1[i].v1, arr1[i].v2) * (k / static_cast<double>(100)) + t2 * max(arr1[i].v1, arr1[i].v2);
		arr2[i].rate = m;
	}
	int count = 0;
	quickSort(arr2, 0, n - 1);
	bool isOrder = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr2[i].rate == arr2[i + 1].rate)
		{
			count++;
			isOrder = true;
		}
		else
			isOrder = false;
		if (!isOrder && count > 0)
		{
			quickSort1(arr2, i - count, i);
			count = 0;
		}
		else if (i == n - 2 && isOrder && count > 0)
			quickSort1(arr2, i + 1 - count, i + 1);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr2[i].num << " ";
		cout << fixed << setprecision(2) << arr2[i].rate;
		cout << "\n";
	}
}