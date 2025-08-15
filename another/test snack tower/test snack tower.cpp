#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<int>freq(n + 1);

	int curr = n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		freq[num] = 1;

		while (freq[curr] == 1)
		{
			cout << curr << " ";
			curr--;
		}
		cout << endl;
	}


}