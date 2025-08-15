#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int n, m, o, A, B;
	cin >> n;
	int* arr1 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	int max1 = arr1[0];
	for (int i = 1; i < n; i++)
	{
		if (arr1[i] > max1)
			max1 = arr1[i];
	}
	cin >> m;
	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];
	int max2 = arr2[0];
	for (int i = 1; i < m; i++)
	{
		if (arr2[i] > max2)
		max2 = arr2[i];
	}
	cin >> o;
	int* arr3 = new int[o];
	for (int i = 0; i < o; i++)
		cin >> arr3[i];
	int min3 = arr3[0];
	for (int i = 1; i < o; i++)
	{
		if (arr3[i] < min3)
			min3 = arr3[i];
	}

	cin >> A >> B;

	double c = (double) A / B;
	double on = (double)max1 * max1 * max2;
	double under = (double)c * min3 + max2;


	double ans1 = (double) on / under;
	double ans = (double)sqrt(ans1);
	cout << setprecision(10) << ans;


}