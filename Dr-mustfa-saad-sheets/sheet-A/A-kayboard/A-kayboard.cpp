#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;
int getindex(char arr[], char i ,int n);

int main()
{
	string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
	int z = 0;
	z = s1.length() + 1;
	char n;
	cin >> n;
	string str;
	cin >> str;
	int curr = str.length();
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());

	char* arr2 = new char[s1.length() + 1];
	strcpy(arr2, s1.c_str());

	char* s2 = new char[curr];
	s2 = arr;


	if (n == 'R')
	{
		for (int i = 0; i < curr; i++)
		{
			s2[i] = arr2[getindex(arr2, arr[i], z) - 1];
		}
	}
	else
	{
		for (int i = 0; i < curr; i++)
		{
			s2[i] = arr2[getindex(arr2, arr[i], z) + 1];
		}
	}

	string s = s2;
	cout << s;

}

int getindex(char arr[], char c ,int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == c)
			k = i;
	}

	return k;

}