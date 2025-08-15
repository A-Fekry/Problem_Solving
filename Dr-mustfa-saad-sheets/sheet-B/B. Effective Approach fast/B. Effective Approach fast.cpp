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
		cin >> arr1[i].num;
		arr1[arr1[i].num - 1].index = i + 1;
	}
	int m;
	cin >> m;
	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	long long sum1 = 0, sum2 = 0;
	for (int i = 0; i < m;i++)
	{
		sum1 += arr1[arr2[i] - 1].index;
	}
	sum2 = m * (static_cast<long long>(n) + 1) - sum1;

	cout << sum1 << " " << sum2;
}