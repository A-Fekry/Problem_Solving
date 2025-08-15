#include <iostream>

using namespace std;

int main()
{
	int n , count = 0;
	cin >> n;

	int* arr1 = new int[n];
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		count++;
		cin >> arr1[i];
		arr2[i] = count;
	}

	int c1 = 0, c2 = 0, c3 = 0 ,j = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == 1)
			c1++;
		else if (arr1[i] == 2)
			c2++;
		else
			c3++;
	}

	if (c1 <= c2 && c1 <= c3)
		j = c1;


	else if (c2 <= c1 && c2 <= c3)
		j = c2;


	else
		j = c3;
	int* arr3 = new int[n];
	int* arr4 = new int[n];
	int* arr5 = new int[n];
	int e1 = 0, e2 = 0, e3 = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == 1)
		{
			arr3[e1] = arr2[i] ;
			e1++;
		}
		else if (arr1[i] == 2)
		{
			arr4[e2] = arr2[i];
			e2++;
		}
		else
		{
			arr5[e3] = arr2[i];
			e3++;
		}

	}

	cout << j << endl;

	for (int i = 0; i < j; i++)
	{
		cout << arr3[i] << " " << arr4[i] << " " << arr5[i] << endl;
	}


}
