#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int c = 0;
	bool is = true;
	for (int i = 1; i < n + 1; i++)
	{
		if (c == 7 && is)
		{
			c = 0;
			is = false;
		}

		else if (c == 4 && !is)
			c = 0;
		if (is)
		{
			if (c == 0)
				cout << 'R';
			else if (c == 1)
				cout << 'O';
			else if (c == 2)
				cout << 'Y';
			else if (c == 3)
				cout << 'B';
			else if (c == 4)
				cout << 'G';
			else if (c == 5)
				cout << 'I';
			else if (c == 6)
				cout << 'V';
		}
		else
		{
			if (c == 0)
				cout << 'B';
			else if (c == 1)
				cout << 'G';
			else if (c == 2)
				cout << 'I';
			else if (c == 3)
				cout << 'V';
		}

		c++;
	}
}