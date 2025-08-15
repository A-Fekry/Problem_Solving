#include <iostream>

using namespace std;
int time1(int n, int t, int k);
int time2(int n, int t, int k , int d);

int main()
{
	float n, t, k, d;
	cin >> n >> t >> k >> d;
	if (time1(n,t,k)<=time2(n,t,k,d))
		cout << "NO";
	else
		cout << "YES";

	cout << time2(n, t, k,d);
}

int time1(int n, int t, int k)
{
	int j=0;
	for (int i = 1; i < 10000; i++)
	{
		if (i * k >= n)
		{
			j = i;
			break;
		}
	}
	return j*t;
}

int time2(int n, int t, int k , int d)
{
	static int j;
	int count = 0;
	for (int i = 1; i < 10000;)
	{
		if (n <= count)
		{
			j = i - 1;
			break;
		}

		else
		{
			if (i % t == 0)
				count += k;

			if ((i - d) % t == 0 && i != d && i - d >= t)
				count += k;

			i++;
		}
		
	}
	

	return j;
}
