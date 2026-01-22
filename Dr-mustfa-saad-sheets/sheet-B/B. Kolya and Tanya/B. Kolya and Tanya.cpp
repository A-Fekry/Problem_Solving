#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long out = 1;
    long long min = 1;
    for (int i = 1; i <= n; i++) {
        out *= 27;
        min *= 7;
        if (out >= (1000000000 + 7)) {
            out = out % (1000000000 + 7);
        }
        if (min >= (1000000000 + 7)) {
            min = min % (1000000000 + 7);
        }
    }
    if (out - min < 0) {
        out += (1000000000 + 7);
    }
    cout << out - min;
}