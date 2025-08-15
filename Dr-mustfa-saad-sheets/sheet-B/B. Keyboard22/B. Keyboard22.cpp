#include <iostream>
#include <set>
#include <cctype>
#include <cmath>

using namespace std;
struct op {
	int k;
	int w;
};

int main()
{

	int u, n, x;
	cin >> n >> u >> x;
	op* arr1 = new op[n * u];
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
	int arr3[26];
	for (int i = 0; i < 26; i++)
		arr3[i] = 11;
	int p;
	cin >> p;
	char* arrr = new char[p];
	for (int i = 0; i < p; i++)
		cin >> arrr[i];
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	op arr4[700];
	for (int s = 0; s < 26; s++)
	{
		int qw = 0,o = -1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < u; j++)
			{
				if (arr[i][j] == arrest[s])
				{
					arr4[qw].k = i + 1;
					arr4[qw].w = j + 1;
					qw++;
				}
			}
		}
		int bb = 0;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < qw; j++)
			{
				bb = pow(arr4[j].k - arr1[i].k, 2) + pow(arr4[j].w - arr1[i].w, 2);
				if (bb <= pow(x, 2))
				{
					o = 1;
					break;
				}
				else
					o = 0;
			}
			if (o == 1)
				break;
		}
		if (o == 0)
			arr3[s] = 1;
		else if (o == 1)
			arr3[s] = 0;

	}
	if (m == 0)
	{
		for (int s = 0; s < 26; s++)
		{
			int ksm = -1, ksn = -1;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < u; j++)
				{
					if (arr[i][j] == arrest[s])
					{
						ksm = i;
						ksn = j;
					}
				}
				if (ksm > -1)
					arr3[s] = 0;
			}
		}
	}
	
	bool done = false;
	int kss = 0;
	for (int i = 0; i < p; i++)
	{
		char sss;
		if (m == 0)
			sss = arrr[i];
		else
		    sss = tolower(arrr[i]);

		if (m == 0 && sss != tolower(arrr[i]))
		{
			cout << -1;
			done = true;
			break;
		}
		int ksa = 0,oo = 0;
		for (int v = 0; v < 26; v++)
		{
			if (arrest[v] == sss)
			{
				ksa = v;
				oo++;
				break;
			}
		}
		if (arr3[ksa] == 11)
		{
			cout << -1;
			done = true;
			break;
		}
		if (sss != arrr[i] && arr3[ksa] == 1 && oo > 0)
			kss++;
	}
	if (!done)
		cout << kss;
}