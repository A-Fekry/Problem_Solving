#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int d, h, v, e;
	cin >> d >> h >> v >> e;
	long double decre, time;
	decre = (long double)v / (pow(d / static_cast<long double>(2), 2) * 3.141592653589793);
	if (decre <= e)
		cout << "NO";
	else
	{
		time = (long double)(h / (decre - e));
		cout << "YES\n";
		cout << time;
	}
}