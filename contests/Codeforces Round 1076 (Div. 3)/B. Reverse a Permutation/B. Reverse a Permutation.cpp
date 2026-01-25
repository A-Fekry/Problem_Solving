#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        int n;
        cin >> n;
        int* arri = new int[n];
        int* arro = new int[n];
        int indt = 0;
        int targ = 0;
        int inds = 0;
        for (int i = 0; i < n; i++) {
            cin >> arri[i];
        }
        while (true) {
            if (inds > n - 1)
                break;
            if (arri[inds] != n - inds) {
                targ = n - inds;
                break;
            }
            inds++;
        }
        for (int i = 0; i < n; i++) {
            if (arri[i] == targ) {
                indt = i;
                break;
            }
        }
        for (int i = 0; i < inds; i++) {
            arro[i] = arri[i];
        }
        int c = 0;
        for (int i = inds; i <= indt; i++) {
            arro[i] = arri[indt - c];
            c++;
        }
        for (int i = indt + 1; i < n; i++) {
            arro[i] = arri[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cout << arro[i] << " ";
        }
        cout << arro[n - 1] << endl;
    }
}