#include <iostream>

using namespace std;

int main()
{
	int n, m, a;
	cin >> n >> m >> a;
	long long k = 0 ,s = 0;
	if (n % a != 0)
		k = (static_cast<long long>(n / a)) + 1;
	else
		k = n / a;

	if (m % a != 0)
		s = (static_cast<long long>(m / a)) + 1;
	else
		s = m / a;

	cout << k * s;
}