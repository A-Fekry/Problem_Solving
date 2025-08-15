#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	char* arr1 = new char[str1.length() + 1];
	strcpy(arr1, str1.c_str());
	int count1 = 0, count2 = 0 , count3 = 0;

	char* arr2 = new char[str2.length() + 1];
	strcpy(arr2, str2.c_str());

	int o = 0;
	for (int i = 0; i < str1.length() + 1 ; i++)
	{
		if (arr1[i] == '|')
		{
			o = i + 1;
			break;
		}

		else
			count1++;
	}
	for (int i = o; i < str1.length() + 1; i++)
	{
		count2++;
	}
	int s = 0;
	for (int i = 0; i < str2.length() + 1; i++)
		count3++;

	if ((count1 + count2 + count3) % 2 != 0 || count1 - count2 + 1 > count3 - 1|| count2 - count1 > count3  )
		cout << "Impossible";

	else
	{
		int z = (str1.length() + str2.length() - 1) / 2;
		for (int i = 0; i < z; i++)
		{
			if (i < count1)
				cout << arr1[i];
			else
			{
				cout << arr2[s];
				s++;
			}
		}
		cout << "|";
		for (int i = 0; i < z ; i++)
		{
			if (i < count2 - 1)
				cout << arr1[i + count1 + 1];
			else
			{
				cout << arr2[s];
				s++;
			}
		}
	}


}

