#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++) {
        string s;
        cin >> s;
        int indextor = 1000000;
        int indextol = -1;
        int indexs = 5000000;
        int cs = 0;
        int len = (int)s.length();
        bool done = false;
        for (int i = 0; i < len; i++) {
            if (s[i] == '*') {
                if(i < len - 1 && s[i + 1] == '<') {
                    done = true;
                    cout << -1 << endl;
                    break;
                }
                else if (i > 0 && s[i - 1] == '>') {
                    done = true;
                    cout << -1 << endl;
                    break;
                }
                else if ((i > 0 && s[i - 1] == '*') || (i < len - 1 && s[i + 1] == '*')) {
                    done = true;
                    cout << -1 << endl;
                    break;
                }
                indexs = i;
                cs++;
            }
            else if (s[i] == '>') {
                if (i < indextor) {
                    indextor = i;
                }
            }
            else if (s[i] == '<') {
                if (i >= indextol) {
                    indextol = i;
                }
            }
            if (indextor < indextol && !done) {
                done = true;
                cout << -1 << endl;
                break;
            }
            if(cs == 2 && !done) {
                done = true;
                cout << -1 << endl;
                break;
            }
        }
        if (!done) {
            if (len == 1) {
                cout << 1 << endl;
            }
            else {
                if (indexs == 5000000) {
                    if (indextol + 1 >= len - indextor) {
                        cout << indextol + 1 << endl;
                    }
                    else {
                        cout << len - indextor << endl;
                    }
                }
                else {
                    if (indextol + 1 >= len - indextor) {
                        cout << indextol + 2 << endl;
                    }
                    else {
                        cout << len - indextor + 1 << endl;
                    }
                }
            }
        }
    }
}
