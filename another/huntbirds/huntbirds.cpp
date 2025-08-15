#include <iostream>

using namespace std;

struct node
{
	int nwire;
	int nbird;
};
int main()
{
	int n;
	cin >> n;
	int* arr1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
		cout << " ";
	}

	int m;
	cin >> m;
	node* arr2 = new node[m];
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i].nwire;
		cout << " ";
		cin >> arr2[i].nbird;
	}

	for (int i = 0; i < m; i++)
	{
		if (arr2[i].nwire < n && arr2[i].nwire > 1)
		{
			arr1[arr2[i].nwire] += (arr1[arr2[i].nwire-1] - arr2[i].nbird);
			arr1[arr2[i].nwire -2 ] += (arr2[i].nbird - 1);
			arr1[arr2[i].nwire - 1] = 0;
		}
		else if (arr2[i].nwire == 1)
		{
			arr1[1] += (arr1[0] - arr2[i].nbird);
			arr1[0] = 0;
		}

		else
		{
			arr1[n - 2] += (arr2[i].nbird - 1);
			arr1[n - 1] = 0;
		}


	}
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << endl;
	}

}