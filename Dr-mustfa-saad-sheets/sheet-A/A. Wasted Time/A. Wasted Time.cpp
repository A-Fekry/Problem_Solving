#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct ob {
	long double x;
	long double y;
};

int main()
{
	long double n, k;
	cin >> n >> k;
	long double z, y;

	ob* arr = new ob[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}
	long double sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		z = pow(arr[i + 1].x - arr[i].x, 2);
		y = pow(arr[i + 1].y - arr[i].y, 2);
		sum += (sqrt(z + y));
	}
	n = sum * k ;
	cout << n * .02;
}