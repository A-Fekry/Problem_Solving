#include <iostream>

using namespace std;


int main()
{
	{
		bool s = false;
		int arr[8] = { 3,5,7,11,13,17,19,23 };
		long long l, r;
		cin >> l >> r;
		if (r - l == 1)
		{
			s = true;
			cout << -1;
		}
		else if (l % 2 == 0)
		{
			s = true;
			cout << l << " " << l + 1 << " " << l + 2;
		}
		else if (r - l >= 3)
		{
			cout << l + 1 << " " << l + 2 << " " << l + 3;
			s = true;
		}
		if (!s)
			cout << -1;
	}

}