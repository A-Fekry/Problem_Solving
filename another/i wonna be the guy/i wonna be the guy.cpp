#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k;
	cin >> k;
	int* arr1 = new int[k];
	for (int i = 0; i < k; i++)
		cin >> arr1[i];
	int m;
	cin >> m;
	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];
	set<int> s;
	for (int i = 0; i < k; i++)
		s.insert(arr1[i]);
	for (int i = 0; i < m; i++)
		s.insert(arr2[i]);

	if (s.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
}