//better but not enough

#include <iostream>

using namespace std;
int arr[1000001];
int countsum(int num);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long out = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                out += countsum(i * j * k);
            }
        }
    }
    cout << out  % 1073741824 << endl;
}

int countsum(int num)
{
    if (arr[num] != 0) {
        return arr[num];
    }
    int divs = 0;
    for (int i = 1; i * i<= num; i++) {
        if (num % i == 0) {
            divs++;
            if (i * i != num) {
                divs++;
            }
        }
    }
    arr[num] = divs;
    return divs;
}




//bad complexity
/*#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
struct maps {
    int num;
    int apeear;
};
int countsum(int i, int j, int k, vector<vector<maps>> v,int c);
vector<maps> merge(vector<maps> i, vector<maps> j, vector<maps> k);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxx;
    maxx = max(a, max(c, b));
    long long out = 0;
    vector<vector<maps>> v(maxx);
    int primes[] = {
    2, 3, 5, 7,
    11, 13, 17, 19,
    23, 29,
    31, 37,
    41, 43, 47,
    53, 59,
    61, 67,
    71, 73, 79,
    83, 89,
    97};
    int rcount = 0;
    for (int m = 1; m <= maxx; m++) {
        for (int i = 0; i < 25;) {
            if (primes[i] > m)
                break;
            if (m % primes[i] == 0) {
                if (rcount == 0) {
                    maps mm;
                    mm.num = m;
                    mm.apeear = 1;
                    v[m % maxx].push_back(mm);
                    rcount++;
                }
                else {
                    v[m % maxx][v[m % maxx].size() - 1].apeear++;
                    rcount++;
                }
            }
            else {
                rcount = 0;
                i++;
            }
        }
    }
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                out += countsum(i, j, k, v,maxx);
            }
        }
    }
    cout << out << endl;
}

int countsum(int i, int j, int k, vector<vector<maps>> v, int maxx)
{
    int num = i * j * k;
    int divs = 1;
    vector<maps> nh = merge(v[i % maxx], v[j % maxx], v[k % maxx]);
    for (int l = 0; l < nh.size(); l++) {
        divs *= (nh[l].apeear + 1);
    }
    return divs;
}

vector<maps> merge(vector<maps> i, vector<maps> j, vector<maps> k)
{
    bool ok = true;
    vector<maps> result;
    for (int s = 0; s < i.size(); s++) {
        result.push_back(i[s]);
    }
    for (int s = 0; s < j.size(); s++) {
        for (int f = 0; f < result.size(); f++) {
            if (j[s].num == result[f].num) {
                result[f].apeear += j[s].apeear;
                ok = false;
                break;
            }
        }
        if (ok) {
            result.push_back(j[s]);
        }
        ok = true;
    }
    for (int s = 0; s < k.size(); s++) {
        for (int f = 0; f < result.size(); f++) {
            if (k[s].num == result[f].num) {
                result[f].apeear += k[s].apeear;
                ok = false;
                break;
            }
        }
        if (ok) {
            result.push_back(k[s]);
        }
        ok = true;
    }
    return result;
}
 */   
    
   