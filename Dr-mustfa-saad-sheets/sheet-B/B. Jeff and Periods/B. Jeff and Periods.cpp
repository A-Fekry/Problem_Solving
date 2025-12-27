#include <iostream>
#include <vector>
struct MyStruct
{
    int value;
    int step;
};
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < vector<int> > vec(100001);
    vector <MyStruct> vo;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vec[m].push_back(i + 1);
    }
    MyStruct x;
    for (int i = 1; i <= 100000; i++) {
        if (vec[i].size() == 0) {
            continue;
        }
        else if (vec[i].size() == 1) {
            x.value = i;
            x.step = 0;
            vo.push_back(x);
        }
        else {
            int step = vec[i][1] - vec[i][0];
            bool isOk = true;
            for (int j = 1; j < vec[i].size() - 1; j++) {
                if (vec[i][j + 1] - vec[i][j] != step) {
                    isOk = false;
                    break;
                } 
            }
            if (isOk) {
                x.value = i;
                x.step = step;
                vo.push_back(x);
            }
        }
    }
    cout << vo.size() << endl;
    for (int i = 0; i < vo.size(); i++) {
        cout << vo[i].value << " " << vo[i].step << endl;
    }
}

