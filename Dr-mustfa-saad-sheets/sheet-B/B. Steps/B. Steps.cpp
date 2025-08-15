#include <iostream>
#include <math.h>

using namespace std;
struct op {
	int y;
	int x;
};
int main()
{
	int m, n;
	cin >> n >> m;
	int y0, x0;
	cin >> x0 >> y0;
	int k;
	cin >> k;
	op* arr = new op[k];
	for (int i = 0; i < k; i++)
		cin >> arr[i].x >> arr[i].y;
	long long steps = 0;
	for (int i = 0; i < k; i++)
	{
		if (arr[i].x == 0 && arr[i].y == 0)
			continue;
		int difx = 2000000000;
		if (arr[i].x != 0)
		{
			difx = (n - x0) / arr[i].x;
			if (arr[i].x < 0)
				difx = -1 * ((x0 - 1) / arr[i].x);
		}
		int dify = 2000000000;
		if (arr[i].y != 0)
		{
			dify = (m - y0) / arr[i].y;
			if (arr[i].y < 0)
				dify = -1 * ((y0 - 1)/ arr[i].y);
		}
		int w = min(difx, dify);
		steps += w;
		x0 += arr[i].x * abs(w);
		y0 += arr[i].y * abs(w);
	}

	cout << steps;
}