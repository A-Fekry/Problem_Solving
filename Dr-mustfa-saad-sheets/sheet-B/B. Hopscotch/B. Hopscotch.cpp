#include <iostream>

using namespace std;

int main()
{
    int a, x, y;
    cin >> a >> x >> y;
    int yy = y / a;
    double yyd = static_cast<double>(y) / a;
    bool odd = (yy % 2 == 0 && yy != 0);
    int xx = a / 2;
    double xxd = a / static_cast<double>(2);
    if (xx != xxd) {
        xx++;
    }
    if (yy == yyd || (odd && x >= a) || (odd && x <= -a) || (!odd && x >= xx) || (!odd && x <= -xx)) {
        cout << -1;
    }
    else {
        if (yy == 0) {
            cout << 1;
        }
        else {
            int num = 1;
            yy--;
            if (yy % 2 == 0) {
                num += (yy / 2) * 3;
            }
            else {
                num++;
                yy--;
                num += (yy / 2) * 3;
            }
            if (odd && x == 0) {
                cout << -1;
            }
            else if (!odd) {
                cout << num + 1;
            }
            else {
                if (x > 0) {
                    cout << num + 2;
                }
                else {
                    cout << num + 1;
                }
            }
        }
    }
}