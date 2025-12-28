#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool getf = false;
    long long znum = 0;
    long long out = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            if(getf)
                out *= (znum + 1);
            getf = true;
            znum = 0;
        }
        else {
            znum++;
        }
    }
    if (getf) {
        cout << out;
    }
    else {
        cout << 0;
    }
}
