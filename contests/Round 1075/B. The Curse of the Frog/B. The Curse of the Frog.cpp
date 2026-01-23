#include <iostream>

using namespace std;
struct input{
	long long ai;
	long long bi;
	long long ci;
};
int main()
{
	int t;
	cin >> t;
	for (int m = 0; m < t; m++) {
		long long n, x;
		cin >> n >> x;
		long long effect = 0;
		input* arr = new input[n];
		input targ;
		for (int i = 0; i < n; i++) {
			cin >> arr[i].ai;
			cin >> arr[i].bi;
			cin >> arr[i].ci;
			if ((arr[i].ai * arr[i].bi - arr[i].ci) > effect) {
				effect = (arr[i].ai * arr[i].bi - arr[i].ci);
				targ.ai = arr[i].ai;
				targ.bi = arr[i].bi;
				targ.ci = arr[i].ci;
			}
		}
		if (effect == 0) {
			cout << -1 << endl;
		}
		else if (targ.ai * (targ.bi - 1) >= x) {
			cout << 0 << endl;
		}
		else {
			long long eff = x / effect;
			eff--;
			long long num = eff * effect;
			while (true) {
				num += targ.ai * (targ.bi - 1);
				if (num >= x) {
					break;
				}
				num = num - targ.ci + targ.ai;
				eff++;
			}
			cout << eff << endl;
		}
	}
}