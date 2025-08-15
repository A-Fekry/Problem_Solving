#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> number (100000000);
	int count = 0;
	for (int i = 0; i < 100000000; i++)
	{
		cin >> number[i];
		count++;

		if (number[i] == 0)
		{
			count--;
			break;
		}
	}
	float j = 0;
	for (int i = 0; i < count; i++)
	{
		j = sqrt(number[i]);
		if (j == floor(j))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

}