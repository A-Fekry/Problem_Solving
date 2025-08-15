#include <iostream>

using namespace std;

void print(int arr[],int n);

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	print(arr, n);

}

void print(int arr[], int n)
{
	int* ars = new int[n];
	int count = 0, k = n;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == k)
		{
			cout << k << " ";
			k--;
			for (int j = 0; j < count; j++)
			{
				
				int c1 = 0, c2 = 0;
				c2++;
				for (int c = 0; c < count; c++)
				{
					
					if (ars[c] == k)
					{
						cout << k << " ";
						c1++;
						k--;
					}
				}
				if (c2 > c1)
				{
					break;
				}
			}
			cout << "\n";
		}

		else
		{
			ars[count] = arr[i];
			count++;
			cout << "\n";
		}
 
	}
	
}
