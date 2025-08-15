#include <iostream>

using namespace std;

void binarySearch(int l, int r, int x, int z, int y);

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    binarySearch(0, n - 1, x, 0, y);
}

void binarySearch(int l, int r , int x , int z, int y) {
    if (l == r) {
        cout << "! " << l + 1;
        cout.flush();
    }
    else {
        int mid = (l + r) / 2;
        cout << "? " << l + 1 << " " << mid + 1 << " ";
        int sumofk = 0;
        for (int i = l; i <= mid; i++)
        {
            int k = 1;
            if (i == mid) {
                cout << k;
                cout.flush();
                sumofk += k;
            }
            else {
                cout << k << " ";
                sumofk += k;
            }
            k++;
        }
        if (y - z == x)
            binarySearch(l, r, x, z, y);

        z++;
        long long res;
        cin >> res;

        if (res / sumofk == x)
            binarySearch(mid + 1, r, x, z, y);
        else
            binarySearch(l, mid, x, z, y);
    }
    
}


