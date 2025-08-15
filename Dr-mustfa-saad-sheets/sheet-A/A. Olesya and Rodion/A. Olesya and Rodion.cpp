#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	
	if (t == 10 && n == 1)
		cout << "-1";
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (t < 10)
				cout << t;
			else
			{
				if (i < n - 1)
					cout << 1;
				else
					cout << 0;
			}
		}
	}
}