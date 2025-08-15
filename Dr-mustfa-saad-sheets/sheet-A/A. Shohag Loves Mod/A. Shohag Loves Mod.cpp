#include <iostream>

using namespace std;
struct op {
	int num;
	int mod;
};
int main()
{
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i == n)
				cout << i + i - 1 << endl;
			else
				cout << 2 * i - 1 << " ";

		}
	}
}