#include <iostream>

using namespace std;

struct quer {
    int l;
    int r;
};
int main()
{
    int t;
    cin >> t;
    for (int s = 0; s < t; s++) {
        int n, q;
        cin >> n >> q;
        int* arra = new int[n];
        int* arrb = new int[n];
        int* arrs = new int[n];
        quer* arr = new quer[q];
        for (int i = 0; i < n; i++) {
            cin >> arra[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arrb[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> arr[i].l >> arr[i].r;
        }
        for (int i = 0; i < n; i++) {
            if (arrb[i] > arra[i]) {
                arra[i] = arrb[i];
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (arra[i + 1] > arra[i]) {
                arra[i] = arra[i + 1];
            }
        }
        arrs[0] = arra[0];
        for (int i = 1; i < n; i++) {
            arrs[i] = arrs[i - 1] + arra[i];
        }
        for (int i = 0; i < q - 1; i++) {
            if (arr[i].l > 1) {
                cout << arrs[arr[i].r - 1] - arrs[arr[i].l - 2] << " ";
            }
            else {
                cout << arrs[arr[i].r - 1] << " ";
            }
        }
        if (arr[q - 1].l > 1) {
            cout << arrs[arr[q - 1].r - 1] - arrs[arr[q - 1].l - 2] << endl;
        }
        else {
            cout << arrs[arr[q - 1].r - 1] << endl;
        }
    }
} 