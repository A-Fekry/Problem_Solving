#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
struct index {
    int value;
    int generation;
};
int main()
{
    int n, m;
    cin >> n >> m;
    int* arr = new int[2 * m];
    for (int i = 0; i < 2 * m; i++) {
        arr[i] = 0;
    }
    if (n >= m) {
        cout << n - m;
    }
    else {
        int cl = 0;
        vector<index> v;
        index mr;
        mr.value = n;
        mr.generation = 0;
        v.push_back(mr);
        int cc = 0;
        int logn = 1;
        while (true) {
            logn += 2;
            index x;
            x.value = v[cc].value * 2;
            x.generation = v[cc].generation + 1;
            bool visited = false;
            if (x.value < 2 * m && arr[x.value] == 50)
                visited = true;
            if (x.value < 2 * m && !visited) {
                v.push_back(x);
                arr[x.value] = 50;
                visited = false;
            }
            if (x.value == m) {
                cl = x.generation;
                break;
            }
            x.value = v[cc].value - 1;
            x.generation = v[cc].generation + 1;
            if (arr[x.value] == 50)
                visited = true;
            if (x.value == m) {
                cl = x.generation;
                break;
            }
            if (x.value > (n / 2) && !visited) {
                v.push_back(x);
                arr[x.value] = 50;
                visited = false;
            }
            cc++;
        }
        cout << cl;
    }
}