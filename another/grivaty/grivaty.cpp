#include <iostream>

using namespace std;
int getindexbig(int array[],int n);
void Swap(int array[], int N, int M);
void Orderarr(int arr[], int num, int big);

int main()
{
	int number,big ,temper ;
	cin >> number;
	temper = number;
	int* array = new int[number];

	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}

	Orderarr(array, number, big);
	for (int j = 0; j < temper; j++)
	{
		cout << array[j];
	}


}

int getindexbig(int array[],int n)
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

void Orderarr(int arr[], int num,int big)
{
	while (num > 1)
	{
		big = getindexbig(arr, num);
		Swap(arr, num - 1, big);
		num = num - 1;
		Orderarr;
	}
}
