#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	vector <int> digits;
	while (n > 0)
	{
		digits.push_back(n % 10);
		n = n / 10;
	}
	for (int i = 0; i < digits.size(); i++)
	{
		if (digits[i] > 4)
		{
			if (i != digits.size() - 1)
				digits[i] = 9 - digits[i];
			else
			{
				if (digits[i] != 9 )
					digits[i] = 9 - digits[i];
			}
		}
	}
	for (int i = digits.size() - 1; i >= 0; i--)
		cout << digits[i];
}