#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	bool done = false;
	int jo = 0;
	if (n < 10000000)
	{
		for (int i = (n * k) / (k + 2); i < (n * (k + 1)) / (k + 2) + 4; i++)
		{
			int sum = 0;
			int qq = 0;
			int pp = 0;
			int mn = log(n) / log(k);
			for (int s = 0; s < mn + 2; s++)
			{
				pp = pow(k, s);
				qq = i / pp;
				sum += qq;
				if (sum >= n)
				{
					jo = i;
					done = true;
					break;
				}

			}
			if (done)
			{
				jo = i;
				done = false;
				break;
			}

		}
		cout << jo;
	}
	else
	{
		int g = log(n) / log(k);
		double x = 0, y = 0;
		for (int i = 0; i < g + 1; i++)
		{
			int o = -1 * i;
			x += pow(k, o);
		}

		y = 1 / x;
		int mns = y * n;
		for (int i = mns - 10000; i < mns + 100000; i++)
		{
			int sum = 0;
			int qq = 0;
			int pp = 0;
			int mn = log(n) / log(k);
			for (int s = 0; s < mn + 2; s++)
			{
				pp = pow(k, s);
				qq = i / pp;
				sum += qq;
				if (sum >= n)
				{
					jo = i;
					done = true;
					break;
				}

			}
			if (done)
			{
				jo = i;
				done = false;
				break;
			}

		}
		cout << jo;
		

	}
}