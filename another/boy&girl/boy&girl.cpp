#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

bool isthere(char arr[26], char n);

int main()
{
	string s1;
	cin >> s1;
	char arr[26];
	for (int w = 0; w < 26; w++)
	{
		arr[w] = w;
	}

	char* arr2 = new char[s1.length() + 1];

	strcpy(arr2, s1.c_str());
	int count = 0;
	for (int k = 0; k < s1.length() + 1; k++)
	{
		if (!isthere(arr, arr2[k]))
		{
			arr[count] = arr2[k];
			count=count+1;
		}
	}

	if ((count+1) % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

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
