#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int h = 0; h < t; h++) {
        int n, s, x;
        cin >> n >> s >> x;
        int m;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> m;
            sum += m;
        }
        bool can = true;
        if (sum > s) {
            can = false;
        }
        else {
            int yy = s - sum;
            if (yy % x != 0) {
                can = false;
            }
        }
        if (can) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
}
   