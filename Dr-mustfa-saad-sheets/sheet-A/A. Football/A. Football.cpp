#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	string team1 = arr[0];
	string team2;
	int c1 = 0, c2 = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == team1)
			c1++;
		else
		{
			team2 = arr[i];
			c2++;
		}
	}
	if (c1 < c2)
		cout << team2;
	else
		cout << team1;
}