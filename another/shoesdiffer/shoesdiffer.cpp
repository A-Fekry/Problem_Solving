#include <iostream>

using namespace std;

bool isthere(int arr[4], int n);

int main()
{
	int arr[4] = { 0,0,0,0 }, arrr[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arrr[i];
		cout << " ";
	}
	int c = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!isthere(arr, arrr[i]))
		{
			c++;
			arr[i] = arrr[i];
		}
	}
	cout << 4-c;

}




bool isthere(int arr[4], int n)
{
	bool k = false;
	for (int i = 0; i < 4; i++)
	{
		if (n == arr[i])
		{
			k = true;
			break;
		}
	}
	return k;
}