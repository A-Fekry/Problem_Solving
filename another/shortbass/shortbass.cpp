#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int getindex(char arr[], char i);

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string str;
	cin >> str;
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());
	int steps=0, j=1;
	for (int i = 0; i < str.length(); i++)
	{
		if ((j - getindex(arrest, arr[i])) >= 0)
			j = j - getindex(arrest, arr[i]);
		else
			j = getindex(arrest, arr[i])-j;
		if (j < 13)
			steps =steps+ j;
		else
			steps =steps + (26 - j);

		j = getindex(arrest,arr[i]);
			
	}

	cout << steps;

}

int getindex(char arr[], char c)
{
	int k = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == c)
			k = i;
	}

	return k+1;

}