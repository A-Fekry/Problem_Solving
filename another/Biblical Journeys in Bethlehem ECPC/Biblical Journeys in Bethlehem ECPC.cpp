#include <iostream>
using namespace std;
struct ele{
    long long d;
    long long p;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ele* arr = new ele[n];
        long long sumd = 0;
        for (int k = 0; k < n; k++) {
            cin >> arr[k].d;
            cin >> arr[k].p;
            if (arr[k].p >= sumd)
                sumd += arr[k].d;
        }
        cout << sumd << endl;
    }
}
