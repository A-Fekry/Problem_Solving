#include <iostream>

using namespace std;
struct op {
	int xi;
	int hight;
};
int main() {
	int n;
	cin >> n;
	op* arr = new op[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i].xi >> arr[i].hight;
	if (n == 1)
		cout << 1;
	else
	{
		int whatireach = arr[0].xi;
		int num = 2;
		for (int i = 1; i < n - 1; i++)
		{
			if (arr[i].xi - arr[i].hight > whatireach)
			{
				num++;
				whatireach = arr[i].xi;
			}
			else if (arr[i].xi + arr[i].hight < arr[i + 1].xi)
			{
				num++;
				whatireach = arr[i].xi + arr[i].hight;
			}
			else
			{
				whatireach = arr[i].xi;
			}
		}
		cout << num;
	}
}