#include <iostream>

using namespace std;

int main()
{
    int n, k, l, r, sa, sk;
    cin >> n >> k >> l >> r >> sa >> sk;
    int* arr = new int[n];
    int modk = sk % k;
    int num = sk / k;
    for (int i = 0; i < k; i++) {
        arr[i] = num;
    }
    for (int i = 0; i < modk; i++) {
        arr[i]++;
    }
    if (n > k) {
        int modn = (sa - sk) % (n - k);
        int numn = (sa - sk) / (n - k);
        for (int i = k; i < n; i++) {
            arr[i] = numn;
        }
        for (int i = k; i < modn + k; i++) {
            arr[i]++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << endl;
}