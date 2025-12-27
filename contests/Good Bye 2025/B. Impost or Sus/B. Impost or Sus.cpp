#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        string s;
        cin >> s;
        int scount = 0;
        int ucount = 0;
        int ocount = 0;
        if (s[0] == 'u') {
            scount++;
            ocount++;
        }
        for (int i = 2; i < s.length() - 1; i++) {
            if (s[i] == 'u' && s[i - 1] == 'u') {
                ocount++;
                i++;
            }
        }
        if (s[s.length() - 1] == 'u') {
            ocount++;
        }
        cout << ocount << endl;
    }
}
