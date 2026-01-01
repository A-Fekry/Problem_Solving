#include <iostream>
#include <vector>

using namespace std;
void add(int a, bool added[], vector<int> arr[],long long& maxn);
int main()
{
    int n , m;
    cin >> n >> m;
    bool* added = new bool[n + 1];
    vector<int>* arr = new vector<int>[n + 1];
    for (int i = 0; i < n + 1; i++) {
        added[i] = false;
    }
    for (int i = 0; i < m; i++) {
        int xi, yi;
        cin >> xi >> yi;
        arr[xi].push_back(yi);
        arr[yi].push_back(xi);
    }
    long long maxn = 1;
    if (m == 0) {
        cout << maxn;
    }
    else {
        int max = 12;
        while (max > 0) {
            int index = 0;
            int max = 0;
            for (int i = 1; i <= n; i++) {
                if (arr[i].size() > max) {
                    index = i;
                    max = arr[i].size();
                }
                if (arr[i].size() == 0) {
                    added[i] = true;
                }
            }
            if (!added[index]) {
                added[index] = true;
            }
            for (int i = 0; i < arr[index].size(); i++) {
                if (!added[arr[index][i]]) {
                    maxn = 2 * maxn;
                    added[arr[index][i]] = true;
                    add(arr[index][i], added, arr, maxn);
                }
            }
            arr[index].clear();
            bool end = true;
            for (int i = 1; i < n + 1; i++) {
                if (!added[i]) {
                    end = false;
                }
            }
            if (end) {
                break;
            }
        }
        cout << maxn;
    }
}

void add(int a, bool added[], vector<int> arr[],long long& maxn)
{
    
    bool update = false;
    for (int i = 0; i < arr[a].size(); i++) {
        if (!added[arr[a][i]]) {
            maxn *= 2;
            update = true;
            added[arr[a][i]] = true;
        }
        else {
            arr[a].erase(arr[a].begin() + i);
            i--;
        }
    }
    if (update) {
        for (int i = 0; i < arr[a].size(); i++) {
            add(arr[a][i], added, arr, maxn);
        }
    }
}
