#include <iostream>

using namespace std;
struct op {
	int num;
	int index;
};
int main()
{
	int n;
	cin >> n;
	op* arr1 = new op[n];
	for (int i = 0; i < n; i++)
	{
		arr1[i].index = i + 1;
		cin >> arr1[i].num;
	}
	int m;
	cin >> m;
	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];
	int count1 = 0, count2 = 0, sum1 = 0, sum2 = 0;
	for (int i = 0; i < m;)
	{
		if (arr2[i] == count1)
		{
			sum1 += arr1[count2].index;
			i++;
		}

		else
		{
			for (int j = 0; j < n; j++)
			{
				if (arr1[j].num == arr2[i])
				{
					count1 = arr2[i];
					count2 = j;
					sum1 += arr1[j].index;
					break;
				}

			}
			i++;
		}
	}
	sum2 = m * (n + 1) - sum1;

	cout << sum1 << " " << sum2;
}