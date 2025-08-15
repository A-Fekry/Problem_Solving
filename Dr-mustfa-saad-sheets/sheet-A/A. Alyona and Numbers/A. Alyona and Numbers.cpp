#include <iostream>

using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;

	long long sum = 0;
	if (n > m)
	{
		int j = 0;
		for (int i = 1; i <= m ; i++)
		{
			if (i % 5 == 0)
				j++;
			sum += (long long)((i + n) / 5) - j;
		}
	}
	else
	{
		int j = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i % 5 == 0)
				j++;
			sum += (long long)((i + m) / 5) - j;
		}
	}
	cout << sum;
}