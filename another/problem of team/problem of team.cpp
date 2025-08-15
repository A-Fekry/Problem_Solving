#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int y = 0, j = 0, k = 0;
		cin >> y;
		cin >> j;
		cin >> k;
		if (j + y + k >= 2)
			count++;


	}
	cout << count << "\n";

}