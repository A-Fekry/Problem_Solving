#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int c = 0;
    int c1 = 0;
    if (k > (int) ((n * n + 1) / 2)) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (c1 % 2 == 0 && c < k) {
                    cout << 'L';
                    c++;
                    c1++;
                }
                else {
                    cout << 'S';
                    c1++;
                }
            }
            if (n % 2 == 0) {
                c1++;
            }
            cout << endl;
        }
    }
}
