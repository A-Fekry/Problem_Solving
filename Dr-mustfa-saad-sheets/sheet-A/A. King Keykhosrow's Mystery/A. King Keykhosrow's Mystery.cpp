#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		int a, b;
		cin >> a >> b;
		int min = a;
		int max = b;
		if (b < a)
		{
			min = b;
			max = a;
		}
		if (a == b)
			cout << min << endl;
		else if (max % min == 0)
			cout << max << endl;
		else
		{
			int divisable = 1;
			int arr1[] = { 2 , 3, 5, 7 ,11 , 13, 17, 19, 23, 29, 31 };
			int num1 = min;
			int num2 = max;
			for (int i = 0; i < 11; i++)
			{
				int num1 = min;
				int num2 = max;
				while (num1 % arr1[i] == 0 && num2 % arr1[i] == 0)
				{
					divisable *= arr1[i];
					num1 /= arr1[i];
					num2 /= arr1[i];
				}

			}
			int m = (a * b) / divisable;
			cout << m << endl;
		}
	}
}