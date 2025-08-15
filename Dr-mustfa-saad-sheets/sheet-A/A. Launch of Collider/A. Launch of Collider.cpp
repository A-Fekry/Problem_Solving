#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int n;
	cin >> n;

	char* arrc = new char[n];
	for (int i = 0; i < n; i++)
		cin >> arrc[i];

	long long* arri = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arri[i];
	
	long long count = 100000000000;
	for (int i = 0; i < n - 1; i++)
	{
		if (arrc[i] == 'R' && arrc[i + 1] == 'L' && (arri[i + 1]) - arri[i] < count)
			count = arri[i + 1] - arri[i];
	}
	if (count == 100000000000 )
		cout << -1;
	else
		cout << count / 2;

}