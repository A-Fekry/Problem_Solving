#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			if (i < n - 2) {
				if (i % 2 == 1)
					cout << 2 << " ";
				else
					cout << -1 << " ";
			}
			else if (i == n - 2) {
				if (n % 2 == 1) {
					cout << 3 << " ";
				}
				else {
					cout << -1 << " ";
				}
			}
			else {
				if (n % 2 == 0)
					cout << 2 << endl;
				else
					cout << -1 << endl;
			}
		}
	}
}