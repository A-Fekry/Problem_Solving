#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int o = 0; o < t; o++) {
		int n, h, l;
		cin >> n >> h >> l;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int c1 = 0;
		int c2 = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] <= h && arr[i] <= l) {
				c1++;
			}
			else if (arr[i] <= max(h, l)) {
				c2++;
			}
		}
		int out = 0;
		if (c1 > c2) {
			out += c2;
			out += (c1 - c2) / 2;
		}
		else {
			out = c1;
		}
		cout << out << endl;
	}
}