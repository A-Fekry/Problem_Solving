#include <iostream>

#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == "Tetrahedron")
			sum += 4;
		else if (arr[i] == "Cube")
			sum += 6;
		else if (arr[i] == "Octahedron")
			sum += 8;
		else if (arr[i] == "Dodecahedron")
			sum += 12;
		else if (arr[i] == "Icosahedron")
			sum += 20;
	}
	cout << sum;
}