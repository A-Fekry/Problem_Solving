#include <iostream>

using namespace std;

struct op {
	int number;
	int amount;
};
int getindexbig(op array[], int n);
void Swap(op array[], int N, int M);
void Orderarr(op arr[], int num, int big);

int main()
{
	int n, m;
	cin >> n >> m;
	op* arr = new op[m];

	for (int i = 0; i < m; i++)
	{
		cin >> arr[i].number;
		cin >> arr[i].amount;
	}
	int big = 0;
	Orderarr(arr, m, big);
	int i = m - 1;
	int sum = 0;
	while (n > 0 && i >= 0)
	{
		if (n >= arr[i].number)
		{
			sum += arr[i].number * arr[i].amount;
			n -= arr[i].number;
		}

		else
		{
			sum += n * arr[i].amount;
			n = 0;
		}
		i--;
	}
	
	cout << sum;

}

int getindexbig(op array[], int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i].amount > temp)
			temp = array[i].amount;
	}
	for (int j = 0; j < n; j++)
	{
		if (array[j].amount == temp)
		{
			temp = j;
			break;
		}
	}
	return temp;
}

void Swap(op array[], int N, int M)
{
	op Temp = array[N];
	array[N] = array[M];
	array[M] = Temp;
}

void Orderarr(op arr[], int num, int big)
{
	while (num > 1)
	{
		big = getindexbig(arr, num);
		Swap(arr, num - 1, big);
		num = num - 1;
		Orderarr;
	}
}