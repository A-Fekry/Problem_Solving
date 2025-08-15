#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#pragma warning(disable : 4996)
using namespace std;
struct op {
	int k;
	int w;
};
int main()
{
	int u, n, x;
	cin >> n >> u >> x;
	op* arr1 = new op[n];
	int m = 0;
	char** arr = new char* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[u];
		for (int j = 0; j < u; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'S')
			{
				arr1[m].w = j + 1;
				arr1[m].k = i + 1;
				m++;
			}
		}
	}
	int p;
	cin >> p;
	char* arrr = new char[p];
	for (int i = 0; i < p; i++)
		cin >> arrr[i];
	int h = 0,o,oo = 0;
	op arr2[10];
	char b;
	bool done = false;
	for (int k = 0; k < p; k++)
	{
		o = 0;
		h = 0;
		if (m > 0)
			b = tolower(arrr[k]);
		else
			b = arrr[k];
		bool is = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < u; j++)
			{
				if (arr[i][j] == b)
				{
					is = true;
					arr2[h].k = i + 1;
					arr2[h].w = j + 1;
					h++;
				}
			}
		}
		if (!is)
		{
			cout << -1;
			done = true;
			break;
		}
		else
		{
			if (b != arrr[k])
			{
				for (int i = 0; i < m; i++)
				{
					for (int j = 0; j < h; j++)
					{
						int bb = 0;
						bb = pow(arr2[j].k - arr1[i].k, 2) + pow(arr2[j].w - arr1[i].w, 2);
						if (bb <= pow(x, 2))
						{
							o++;
							break;
						}
					}
				}
				if (o == 0)
					oo++;
			}
		}
	}
	if (!done)
		cout << oo;
}