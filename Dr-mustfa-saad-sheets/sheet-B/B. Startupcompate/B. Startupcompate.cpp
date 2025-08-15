#include <iostream>
#include <set>
using namespace std;
struct op {
	int mark;
	int cost;
};
static void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[high];
		int i = (low - 1);

		for (int j = low; j < high; j++) {
			if (arr[j] < pivot) {
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
	int T;
	cin >> T;
	int* arrans = new int[T];
	for (int i = 0; i < T; i++)
	{
		int N, K;
		cin >> N >> K;

		op* arr = new op[K];
		for (int j = 0; j < K; j++)
			cin >> arr[j].mark >> arr[j].cost;
		long long sum = 0;
		set <int> tosolve;
		int z = 0;
		int* arr1 = new int[K];

		for (int j = 0; j < K; j++)
		{
			int m = tosolve.size();
			tosolve.insert(arr[j].mark);
			if (tosolve.size() > m)
			{
				arr1[z] = arr[i].mark;
				z++;
			}
		}
		int* arr2 = new int[z];
		for (int j = 0; j < z; j++)
			arr2[j] = 0;
		if (N >= tosolve.size())
		{
			for (int j = 0; j < K; j++)
				sum += arr[j].cost;
		}
		else if (N == 0)
			sum = 0;
		else
		{
			for (int j = 0; j < z; j++)
			{
				for (int k = 0; k < K; k++)
				{
					if (arr1[j] == arr[k].mark)
					{
						arr2[j] += arr[k].cost;
					}
				}

			}
			for (int j = 0; j < K; j++)
				sum += arr[j].cost;
			quickSort(arr2, 0, z - 1);
			for (int j = 0; j < tosolve.size() - N; j++)
				sum -= arr2[j];


		}

		cout << sum << endl;
	}
}