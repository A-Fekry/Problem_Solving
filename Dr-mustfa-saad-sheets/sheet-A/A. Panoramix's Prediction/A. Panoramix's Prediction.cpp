#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[15] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	bool nex = true , is = true;
	if ((m - n) > 6)
		nex = false;
	else
	{
		for (int i = 2; i < 9 && i < m; i++)
		{
			if (m % i == 0)
				is = false;
		}

		for (int i = n + 1; i < m; i++)
		{
			for (int j = 0; j < 15 ; j++)
			{
				if (i == arr[j])
				{
					nex = false;
					break;
				}
			}

		}
	}


	if (nex && is)
		cout << "YES";
	else
		cout << "NO";
}