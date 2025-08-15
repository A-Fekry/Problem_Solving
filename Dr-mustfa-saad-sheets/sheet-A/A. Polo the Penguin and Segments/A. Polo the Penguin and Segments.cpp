#include <iostream>

using namespace std;

struct ob {
	int l;
	int r;
};
int main()
{
	int n, k;
	cin >> n >> k;
	ob* arr = new ob[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].l;
		cin >> arr[i].r;
	}
	long long x = 0;
	for (int i = 0; i < n; i++)
		x += (arr[i].r - arr[i].l + 1);
	x = x % k;
	if (x == 0)
		cout << 0;
	else
		cout << k - x;


}