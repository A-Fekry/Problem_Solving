#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long k;
	long long n;
	cin >> n >> k;
	long long sum = (k * (k - 1)) / 2 + 1;
	if (n > sum)
		cout << -1;
	else if (n == sum)
		cout << k - 1;
	else if (n == 1)
		cout << 0;
	else if (k >= n && n > 1)
		cout << 1;
	else
	{
		long long dif = (sum - n);
		long long st = sqrt(2 * dif - 2) + 1;
		if (dif == 1)
			cout << k - 2;
		else if (dif == (st * (st - 1)) / 2 + 1)
			cout << k - st;
		else
		{
			while (dif > (st * (st - 1) / 2) + 1)
				st++;
			cout << k - st + 1;
		}
	}
}