#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> index;
    set<char> chars;
    char letters[26] = {
    'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z'
    };
    if (s.size() > 25) {
        for (int i = 0; i < s.length() - 25; i++) {
            for (int j = 0; j < 26; j++) {
                if (s[i + j] == '?') {
                    index.push_back(i + j);
                }
                else {
                    chars.insert(s[i + j]);
                }
            }
            if (index.size() + chars.size() == 26) {
                break;
            }
            else {
                index.clear();
                chars.clear();
            }
        }
    }
    
    if (index.size() + chars.size() < 26) {
        cout << -1;
    }
    else {
        for (int i = 0; i < index.size(); i++) {
            for (int j = 0; j < 26; j++) {
                int x = chars.size();
                chars.insert(letters[j]);
                if (chars.size() > x) {
                    s[index[i]] = letters[j];
                    break;
                }
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '?') {
                cout << s[i];
            }
            else {
                cout << 'A';
            }
        }
    }
}