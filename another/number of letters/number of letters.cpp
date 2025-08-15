
#include <iostream>
#include <string>
#include <cstring>

#pragma warning(disable : 4996)

using namespace std;

bool isthere(char arr[26], char n);
int main()
{
	char arrest[26] = { '1','0','0','0','3','3','3','6','2','5','5','5','2','2','5','5','5','5','5','5','9','9','9','9','9','2' };
	string str;
	cin >> str;
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());
	int count = 0 ,j=0;
	for (int i = 1; i < str.length() - 2; i += 3)
	{
		if (!isthere(arrest, arr[i]))
		{
			count++;
			arrest[j] = arr[i];
			j++;
		}
	}
	cout << count;
	cout << str;
}

bool isthere(char arr[26], char n)
{
	bool k = false;
	for (int i = 0; i < 26; i++)
	{
		if (n == arr[i])
		{
			k = true;
			break;
		}
	}
	return k;
}
