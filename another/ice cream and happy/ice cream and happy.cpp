#include <iostream>

using namespace std;

struct strc {
	long long item;
	char sign;
};
int main()
{
	int n;
	long long x;
	cin >> n >> x;
	strc* arr = new strc[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].sign;
		cin >> arr[i].item;
	}
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i].sign == '+')
			x += arr[i].item;
		
		else
		{
			if (arr[i].item > x)
				count++;
			else
				x -= arr[i].item;
		}
	}

	cout << x << " " << count;
}