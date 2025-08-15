#include <iostream>

using namespace std;

int main()
{
	bool s = false;
	int arr[8] = { 3,5,7,11,13,17,19,23};
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
	else
	{
			for (int j = 7; j >= 0; j--)
			{
				if (j != 0 && l % arr[j] == 0 && r - l >= 2 * arr[j])
				{
					cout << l << " " << l + 1 << " " << l + 2 * arr[j];
					s = true;
				}
				else if (j == 0 && l % arr[j] == 0)
				{
					if ((l + 1) % 5 == 0 && r - l >= 12)
					{
						cout << l << " " << l + 1 << " " << l + 12;
						s = true;
					}

					else if (r - l >= 3)
					{
						s = true;
						cout << l << " " << l + 1 << " " << l + 6;
					}
				}
			}
	}
	if (!s)
		cout << -1;
}