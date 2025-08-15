#include <iostream>
#include <vector>

using namespace std;

//vector<int> inttoarr(int num);

int main()
{
	int k, j,count=0;
	cin >> k;
	cout << " ";
	cin >> j;
	for (int i = 1; i < 10; i++)
	{
		int n = k * i;
		if ((n % 10) == j || (n % 10)==0)
		{
			count = i;
			break;
		}
		

	}

	cout << count;
}

/*vector<int> inttoarr(int num)
{
	vector<int> digits;
	while (num > 0)
	{
		digits.insert(digits.begin(), num % 10);
	}

	return digits;
}*/
