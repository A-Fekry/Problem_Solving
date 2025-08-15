#include <iostream>

using namespace std;
void getindexbig(int array[], int n);
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	//int k = 0, sum = -1 * arr[0];

	//for (int i = 0; i < n - 1; i++)
	//{
	//	sum += arr[i] - arr[i + 1];

	//	if (sum < i)
	//		k = sum;
	//}

	//cout << k * -1;
	getindexbig(arr, n);

}

void getindexbig(int array[], int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > temp)
			temp = array[i];
	}
	cout << temp;
}