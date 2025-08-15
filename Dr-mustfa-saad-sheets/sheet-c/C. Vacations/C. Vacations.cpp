#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr1 = new int[n];
	char* arr2 = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];	
	}
	if (arr1[0] == 0)
		arr2[0] = 'n';
	else if (arr1[0] == 1)
		arr2[0] = 'w';
	else if (arr1[0] == 2)
		arr2[0] = 'p';
	else
		arr2[0] = 'a';

	int restdays = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr1[i] == 3 && (arr2[i - 1] == 'n' || arr2[i - 1] == 'a'))
			arr2[i] = 'a';
		else if ((arr1[i] == 2 && arr2[i - 1] == 'w') || (arr1[i] == 3 && arr2[i - 1] == 'w') || (arr1[i] == 2 && arr2[i - 1] == 'n') || (arr1[i] == 2 && arr2[i - 1] == 'a'))
			arr2[i] = 'p';
		else if ((arr1[i] == 1 && arr2[i - 1] == 'p') || (arr1[i] == 3 && arr2[i - 1] == 'p') || (arr1[i] == 1 && arr2[i - 1] == 'n') || (arr1[i] == 1 && arr2[i - 1] == 'a'))
			arr2[i] = 'w';
		else if (arr1[i] == 0 || (arr1[i] == 1 && arr2[i - 1] == 'w') || (arr1[i] == 2 && arr2[i - 1] == 'p'))
			arr2[i] = 'n';

	}
	for (int i = 0; i < n; i++)
	{
		if (arr2[i] == 'n')
			restdays++;
	}
	cout << restdays;
}

