#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int* arrbase = new int[N];
	int* arrans = new int[N];
	for (int i = 0; i < N; i++)
	{
		bool is = false;
		cin >> arrbase[i];
		int* arr = new int[arrbase[i]];
		for (int j = 0; j < arrbase[i]; j++)
			cin >> arr[j];
		for (int j = 0; j < arrbase[i] - 1; j++)
		{
			if (arr[j] - arr[j + 1] != 5 && arr[j] - arr[j + 1] != -5 && arr[j] - arr[j + 1] != 7 && arr[j] - arr[j + 1] != -7)
			{
				arrans[i] = 0;
				is = true;
				break;
			}
		}
		if (!is)
			arrans[i] = 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (arrans[i] == 1)
			cout << "YES\n";
		else
			cout << "NO\n";

	}
	
}