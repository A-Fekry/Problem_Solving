#include <iostream>
#include <vector>
#include <set>
using namespace std;
struct node {
    int nnode;
    int color;
};
void check(int cnode, int nnode, int rcl, vector<node> arr[], int target);
bool visited[101];
set<int> cols;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<node>* arr = new vector<node>[n + 1];
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        node n;
        n.nnode = b;
        n.color = c;
        arr[a].push_back(n);
        n.nnode = a;
        arr[b].push_back(n);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cols.clear();
        for (int j = 0; j < arr[a].size(); j++) {
            fill(visited, visited + n + 1, false);

            if (arr[a][j].nnode == b) {
                cols.insert(arr[a][j].color);
            }
            else {
                check(a, arr[a][j].nnode, arr[a][j].color, arr, b);
            }
        }
        cout << cols.size() << endl;
    }
}

void check(int cnode, int nnode, int rcl, vector<node> arr[], int target)
{
    visited[nnode] = true;

    for (auto& x : arr[nnode]) {
        if (x.color == rcl && !visited[x.nnode]) {
            if (x.nnode == target) {
                cols.insert(rcl);
            }
            else {
                check(nnode, x.nnode, rcl, arr, target);
            }
        }
    }
}

