#include <iostream>


using namespace std;

struct uniform
{
	int h;
	int g;
};

int main()
{
	int i;
	cin >> i;

	uniform* arr = new uniform[i];
	for (int j = 0; j < i; j++)
	{
		cin >> arr[j].h;
		cout << " ";
		cin >> arr[j].g;
		cout << endl;
	}
	int count = 0;
	for (int j = 0; j < i ; j++)
	{
		for (int k = 0; k < i; k++)
		{
			if (arr[j].g == arr[k].h)
				count++;
		}
	}


	cout << count;
}