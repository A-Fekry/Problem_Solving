#include <iostream>

using namespace std;

static void quickSort(long long arr[], int low, int high) {
    if (low < high) {
        long long pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    long long n, l;
    cin >> n >> l;
    long long* arr = new long long[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quickSort(arr, 0, n - 1);
    long long s = 2 * arr[0] , k = 0;
    if ((l - arr[n - 1]) * 2 > s)
        s = (l - arr[n - 1]) * 2;

    for (int i = 1; i < n; i++)
    {
        k = (arr[i] - arr[i - 1]);
        if (k > s)
            s = k;
    }
    double m = s / static_cast<double>(2);
    cout << fixed << m;
}