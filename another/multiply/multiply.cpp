#include <iostream>

using namespace std;

int main()
{
	int step, mod;
	while (cin >> step >> mod)
	{
		int count = 0;
		int* arr = new int[mod];
		for (int i = 0; i < mod; i++)
		{
			if (count < mod)
			{
				arr[i] = count;
				count += step;
			}
			else
			{
				arr[i] = count % mod;
				count += step;
			}

		}
		bool x = true;
		for (int i = 1; i < mod; i++)
		{
			if (arr[i] == arr[0])
				x = false;
		}
		if (x)
			cout << step << "      " << mod << "\t" << "good choice \n";
		else
			cout << step << "      " << mod << "\t" << "bad choice \n";

	}
}