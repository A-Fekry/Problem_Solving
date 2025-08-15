#include <iostream>

using namespace std;

int main()
{
	int k;
	cin >> k;

	int* arr = new int[k];
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
		cout << " ";
	}
	cout << endl;
	int count1 = 0, count2 = 0 ,i=0,m=k-1,j=0;

	while (m>=i)
	{
		if ( j % 2 == 0)
		{
			if (arr[i] > arr[m])
			{
				count1 = count1 + arr[i];
				i++;
			}
			else
			{
				count1 = count1 + arr[m];
				m--;
			}
			j++;
		}

		else
		{
			if (arr[i] > arr[m])
			{
				count2 = count2 + arr[i];
				i++;
			}
			else
			{
				count2 = count2 + arr[m];
				m--;
			}
			j++;
		}
		

	}

	cout << count1 << " " << count2;



}



