#include <iostream>

using namespace std;

int main()
{
	int r1, r2, c1, c2, d1, d2, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	bool isthere = false;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = 1; k < 10; k++)
			{
				for (int z = 1; z < 10; z++)
				{
					if (i + j == r1 && k + z == r2 && i + k == c1 && z + j == c2 && i + z == d1 && j + k == d2 && i != j && k != z && z != i && k != j && k != i && z != j)
					{
						s1 = i;
						s2 = j;
						s3 = k;
						s4 = z;
						isthere = true;
					}

				}
			}
		}
	}
	if (isthere)
	{
		cout << s1 << " " << s2 << endl;
		cout << s3 << " " << s4 << endl;
	}
	else
		cout << -1;
}