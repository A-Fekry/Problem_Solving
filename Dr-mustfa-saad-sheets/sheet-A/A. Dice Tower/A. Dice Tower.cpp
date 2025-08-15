#include <iostream>

using namespace std;
struct ob {
	int r;
	int l;
};
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	ob* arr = new ob[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].l >> arr[i].r;
	}
	bool able = true;
	for (int i = 0; i < n; i++)
	{
		if (7 - k == arr[i].l || 7 - k == arr[i].r || k == arr[i].l || k == arr[i].r)
		{
			able = false;
			break;
		}
	}
	if (able)
		cout << "YES";
	else
		cout << "NO";
}