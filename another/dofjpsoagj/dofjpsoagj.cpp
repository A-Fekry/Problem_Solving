

#include <iostream>

using namespace std;
int main()
{
	int n , h ;
	cin >> n;
	cin >> h;

	int* array = new int[n];
	int count = 0;

	for (int y = 0; y < n; y++)
		cin >> array[y];
	


	for (int i = 0; i < n; i++)
	{
		if (array[i] <= h)
			count++;
		else
			count = count + 2;


	}
	delete []array; 

	cout << count;

}