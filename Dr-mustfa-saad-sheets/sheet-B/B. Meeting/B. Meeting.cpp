#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
using namespace std;

struct index {
	int x;
	int y;
};
bool checkDist(int x, int y, int r, index mm);

int main(){
	int xa, ya, xb, yb;
	cin >> xa >> ya >> xb >> yb;
	vector <index> v;
	for (int i = min(ya, yb); i <= max(ya, yb); i++) {
		index n;
		n.x = xa;
		n.y = i;
		v.push_back(n);
		n.x = xb;
		n.y = i;
		v.push_back(n);
	}
	for (int i = min(xa, xb) + 1; i < max(xa, xb); i++) {
		index n;
		n.x = i;
		n.y = ya;
		v.push_back(n);
		n.x = i;
		n.y = yb;
		v.push_back(n);
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, r;
		cin >> x >> y >> r;
		for (int j = 0; j < v.size(); j++) {
			if (checkDist(x, y, r, v[j])) {
				v.erase(v.begin() + j);
				j--;
			}
		}
	}
	cout << v.size() << endl;
}

bool checkDist(int x, int y, int r, index mm)
{
	float f = pow((y - mm.y), 2);
	float h = pow((x - mm.x), 2);
	float dis = sqrt(f + h);
	return (float)r >= dis;
}
