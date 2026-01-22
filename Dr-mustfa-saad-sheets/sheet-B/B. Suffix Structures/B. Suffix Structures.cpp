#include <iostream>

using namespace std;

int main()
{
    string s;
    string t;
    cin >> s >> t;
    int* arr = new int[s.length()];
    for (int i = 0; i < s.length(); i++) {
        arr[i] = 0;
    }
    bool fin = false;
    for (int j = 0; j < t.length(); j++) {
        bool exist = false;
        for (int i = 0; i < s.length(); i++) {
            if (arr[i] == 0) {
                if (s[i] == t[j]) {
                    exist = true;
                    arr[i] = (j + 1);
                    break;
                }
            }
        }
        if (!exist) {
            cout << "need tree" << endl;
            fin = true;
            break;
        }
    }
    if (!fin) {
        if (s.length() == t.length()) {
            cout << "array" << endl;
        }
        else {
            bool needArr = true;
            int c1 = 0;
            int c2 = 0;
            while (c1 <= s.length()) {
                if (c2 == t.length()) {
                    needArr = false;
                    break;
                }
                if (c1 < s.length() && s[c1] == t[c2]) {
                    c1++;
                    c2++;
                }
                else {
                    c1++;
                }
            }
            if (needArr) {
                cout << "both" << endl;
            }
            else {
                cout << "automaton" << endl;
            }
        }
    }
}
