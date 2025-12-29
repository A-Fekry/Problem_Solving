#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int kkk = 0; kkk < t; kkk++) {
        int a, b;
        cin >> a >> b;
        bool end = false;
        int c = 0;
        if (a < b) {
            int temp = b;
            b = a;
            a = temp;
        }
        int big = a, smal = b;
        while (!end) {

            if (big >= pow(2, c)) {
                big -= pow(2, c);
                c++;
            }
            else {
                break;
            }
            if (smal >= pow(2, c)) {
                smal -= pow(2, c);
                c++;
            }
            else {
                break;
            }   
        }
        int c2 = 0;
        big = a;
        smal = b;
        while (!end) {
            if (smal >= pow(2, c2)) {
                smal -= pow(2, c2);
                c2++;
            }
            else {
                break;
            }

            if (big >= pow(2, c2)) {
                big -= pow(2, c2);
                c2++;
            }
            else {
                break;
            }
        }
        if (c2 > c) {
            c = c2;
        }
        if (b == 1 && a == 1) {
            cout << 1 << endl;
        }
        else if (b == 1) {
            cout << 2 << endl;
        }
        else {
            cout << c << endl;
        }
    }
}
