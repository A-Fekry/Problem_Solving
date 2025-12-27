#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        bool is = true;
        int ycount = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'Y') {
                ycount++;
            }
            if (ycount == 2) {
                is = false;
                break;
            }
        }
        if (is) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
