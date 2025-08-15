#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = 0;
	while (n != 0)
	{
		int j = log(n) / log(2);
		n = n - pow(2, j);
		m++;
	}
	cout << m;
}