#include <iostream>

using namespace std;

int main()
{
	int array[5][5]{};

	for (int i = 0; i < 5; i++)
	{

		for (int y = 0; y < 5; y++)
		{
			cin >> array[i][y];
		}
	}
	int k = 0, r = 0,count1=0,count2=0;
	for (int i = 0; i < 5; i++)
	{

		for (int y = 0; y < 5; y++)
		{
			if (array[i][y] == 1)
			{
				r = y;
				k = i;
			}
		}
	}
	if (r == 1 || r == 5)
		count1 = 2;
	else if (r == 4 || r == 2)
		count1 = 1;
	else
		count1 = 0;

	if (k == 1 || k == 5)
		count2 = 2;
	else if (k == 4 || k == 2)
		count2 = 1;
	else
		count2 = 0;


	cout << count1 + count2;


}