#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    int arrr[5001] = { 0 };
    int mx = 0;
    int mn = 5001;

    for (int i = 0; i < n; i++) {
        int kl;
        fin >> kl;
        arrr[kl]++;
        if (kl > mx) mx = kl;
        if (kl < mn) mn = kl;
    }

    vector<int> v, vv;
    for (int i = mn; i <= mx; i++) {
        if (arrr[i] > 0) {
            v.push_back(arrr[i]);
            vv.push_back(i);
        }
    }

    int c = n;
    for (int i = 0; i < v.size(); i++) {
        int x = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (vv[j] > 2 * vv[i]) break;
            x = j;
        }

        int temp = 0;
        for (int j = 0; j < i; j++) temp += v[j];
        for (int j = x + 1; j < v.size(); j++) temp += v[j];

        c = min(c, temp);
    }

    if (mx <= 2 * mn)
        fout << 0 << endl;
    else
        fout << c << endl;

    fin.close();
    fout.close();
    return 0;
}
