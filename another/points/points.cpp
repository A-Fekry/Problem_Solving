#include <iostream>

using namespace std;

int main()
{
	int y, w;
	float p = 0;
	cin >> y;
	cout << " ";
	cin >> w;

	if (y == 0 && w == 0)
		p = 1;
	else if (y >= w)
	{
		p = (7 - y) ;
	}
	else if(w>y)
		p = (7 - w) ;
	if (p == 6)
		cout << "1/1";
	else if (p == 4 || p == 2)
		cout << p / 2 << "/3";
	else if (p == 1 || p == 5)
		cout << p << "/6";
	else
		cout << "1/2";
}