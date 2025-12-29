#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        /*int* arr = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }*/
        string arr;
        cin >> arr;
        bool hasS = false;
        bool hasF = false;
        for (int j = 0; j < n - 3; j++) {
            if (arr[j] == '2' && arr[j + 1] == '0' && arr[j + 2] == '2' && arr[j + 3] == '5') {
                hasF = true;
            }
            if (arr[j] == '2' && arr[j + 1] == '0' && arr[j + 2] == '2' && arr[j + 3] == '6') {
                hasS = true;
            }
        }
        if (hasS || (!hasS && !hasF)) {
            cout << 0 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
}