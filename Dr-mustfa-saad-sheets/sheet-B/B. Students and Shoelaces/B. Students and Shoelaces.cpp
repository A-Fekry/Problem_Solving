#include <iostream>

using namespace std;

struct op {
	int a;
	int b;
};
int main()
{
	int n, m;
	cin >> n >> m;

	op* arr1 = new op[m];
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
		arr2[i] = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> arr1[i].a >> arr1[i].b;
		arr2[arr1[i].a - 1]++;
		arr2[arr1[i].b - 1]++;
	}
	int gro = 0;
	int s = 10;
	bool the = true;

	while (the)
	{
		the = false;
		for (int i = 0; i < n; i++)
		{
			if (arr2[i] == 1)
			{
				arr2[i] = 0;
				the = true;
			}
		}
		if (the)
		{
			gro++;
			for (int i = 0; i < m; i++)
			{
				if (arr2[arr1[i].a - 1] == 0)
					arr1[i].a = 0;
				if (arr2[arr1[i].b - 1] == 0)
					arr1[i].b = 0;
				
			}
		}
		if (the)
		{
			for (int i = 0; i < n; i++)
				arr2[i] = 0;
			for (int i = 0; i < m; i++)
			{
				if (arr1[i].a > 0 && arr1[i].b > 0)
				{
					arr2[arr1[i].a - 1]++;
					arr2[arr1[i].b - 1]++;
				}
			}
		}
	}
	cout << gro;
}