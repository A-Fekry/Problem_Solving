#include <iostream>
#include <set>

using namespace std;
struct ind {
    double x;
    double y;
};

int main()
{
    int n, xo, yo;
    cin >> n >> xo >> yo;
    ind* arr = new ind[n];
    set<double> res;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
        if (arr[i].x - xo == 0) {
            res.insert(100000);
        }
        else {
            double aa = (arr[i].y - yo) / (arr[i].x - xo);
            res.insert(aa);
        }
    }
    cout << res.size();
}
