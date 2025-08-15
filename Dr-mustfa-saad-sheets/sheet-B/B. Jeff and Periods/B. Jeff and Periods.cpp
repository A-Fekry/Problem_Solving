#include <bits/stdc++.h> // includes everything
using namespace std;

typedef long long ll;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<vector<int>> seq(1e5 + 9);
vector<pair<int, int>> ans;

int main() {
    fast();

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        seq[x].push_back(i);
    }

    for (int i = 0; i < 100000; i++) {
        if (seq[i].empty()) {
            continue;
        }
        else if (seq[i].size() == 1) {
            ans.push_back({ i, 0 });
        }
        else if (seq[i].size() == 2) {
            ans.push_back({ i, seq[i][1] - seq[i][0] });
        }
        else {
            bool flag = true;
            for (size_t j = 2; j < seq[i].size(); j++) {
                if (seq[i][j] - seq[i][j - 1] != seq[i][j - 1] - seq[i][j - 2]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans.push_back({ i, seq[i][1] - seq[i][0] });
            }
        }
    }

    cout << ans.size() << "\n";

    for (size_t i = 0; i < ans.size(); i++) {
        printf("%d %d\n", ans[i].first, ans[i].second);
    }
}
