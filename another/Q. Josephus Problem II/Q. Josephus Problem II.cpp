#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	int postion = k + 1;
	while (count < n)
	{
		if (postion == n)
		{
			cout << postion << " ";
			postion = postion % n;
			count++;
		}
		else
		{
			if (count < n - 1)
			{
				cout << postion % n << " ";
				postion = postion % n;
				count++;
			}
			else
			{
				cout << postion % n << endl;
				postion = postion % n;
				count++;
			}

		}
		postion += k + 1;
	}
}