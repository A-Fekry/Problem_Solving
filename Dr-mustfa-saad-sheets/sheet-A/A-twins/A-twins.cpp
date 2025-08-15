#include <iostream>

using namespace std;
int getindexbig(int array[], int n);
void Swap(int array[], int N, int M);
void Orderarr(int arr[], int num, int big);

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	Orderarr(arr, n, count);
	int sum = 0, half = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int c1 = 0;
	for (int i = n-1; i >= 0; i--)
	{
		if (half > sum / 2)
			break;
		else
		{
			half += arr[i];
			c1++;
		}
	}
	cout << c1;

}

int getindexbig(int array[], int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > temp)
			temp = array[i];
	}
	for (int j = 0; j < n; j++)
	{
		if (array[j] == temp)
			temp = j;
	}
	return temp;
}

void Swap(int array[], int N, int M)
{
	int Temp = array[N];
	array[N] = array[M];
	array[M] = Temp;
}

void Orderarr(int arr[], int num, int big)
{
	while (num > 1)
	{
		big = getindexbig(arr, num);
		Swap(arr, num - 1, big);
		num = num - 1;
		Orderarr;
	}
}