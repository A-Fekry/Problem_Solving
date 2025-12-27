#include <iostream>
#include <cmath>
using namespace std;
bool isTheBigger(int arr[], int i, int size);
int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        long long x = 0;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] <= 0) {
                if (i == n - 2 || isTheBigger(arr, i + 1, n)) {
                    if (abs(arr[i + 1]) > arr[i]) {
                        x -= arr[i + 1];
                    }
                    else {
                        x += arr[i];
                    }
                }
                else {
                    x -= arr[i + 1];
                    arr[i + 1] = arr[i];
                }
            }
            else if (arr[i] >= 0 && arr[i + 1] >= 0) {
                x += arr[i];
            }
            else {
                if (i == n - 2) {
                    if (abs(arr[i]) > arr[i + 1]) {
                        x -= arr[i + 1];
                    }
                    else {
                        x += arr[i];
                    }
                }
                else {
                    x += arr[i];
                }
            }
        }
        cout << x << endl;
    }
}

bool isTheBigger(int arr[], int i, int size)
{
    bool is = true;
    for (int y = i + 1; y < size; y++) {
        if (arr[i] <= arr[y]) {
            is = false;
            break;
        }
    }
    return is;
}
