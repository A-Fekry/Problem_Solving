#include <iostream>

using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[100000];
	for (int i = 0; i < 100000; i++)
		arr[i] = 0;
	int b = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> b ;
		arr[b - 1]++;
	}

	for (int i = 0; i < 100000; i++)
	{

		for (int y = 0; y < arr[i]; y++)
		{
			cout << i + 1 << " ";
		}
	}
}