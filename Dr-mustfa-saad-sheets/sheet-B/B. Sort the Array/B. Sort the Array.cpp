#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int count = 0, t = 0 , count2 = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			if (count == 0)
				t = i;
			count++;
		}
	}
	int sd = 0;
	int* arr2 = new int[count + 1];
	for (int i = t; i < t + count + 1; i++)
	{
		arr2[sd] = arr[i];
		sd++;
	}
	sd = 0;
	for (int i = t + count; i >= t ; i--)
	{
		arr[i] = arr2[sd];
		sd++;
	} 


	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			count2++;
	}
	if (count2 > 0)
		cout << "no" << endl;
	else
	{
		cout << "yes \n";
		cout << t + 1 << " " << t + count + 1;
	}
}