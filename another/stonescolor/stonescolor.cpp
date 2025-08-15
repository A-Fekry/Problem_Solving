#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	string s, t;
	cin >> s;
	cin >> t;

	char* arr1 = new char[s.length() + 1];
	strcpy(arr1, s.c_str());

	char* arr2 = new char[t.length() + 1];
	strcpy(arr2, t.c_str());
	int count = 1 , k=0;

	for (int i = 0; i < s.length() + 1;)
	{
		for (int j = 0; j < t.length() + 1; j++)
		{
			
		
			if (arr1[i] == arr2[j] && j == t.length())
			{
				k = j;
				count++;
				break;
			}
			else if (arr1[i] == arr2[j] && j != t.length())
			{
				count++;
				i++;
			}
			else if (j == t.length())
			{
				k = j;
				break;

			}
		}

		if (k == t.length())
			break;
	}
	if (count > s.length() + 1)
		count = s.length() + 1;


	cout << count;

}