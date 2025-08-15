#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

bool isthere(char arr[26], char n);
int getindex(char arr[], char i);

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char arrest2[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	string str;
	cin >> str;
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());
	int count1 = 0, count2 = 0;
	for (int i = 0; i < str.length() + 1; i++)
	{
		if (isthere(arrest, arr[i]))
			count1++;
	}

	for (int i = 0; i < str.length() + 1; i++)
	{
		if (isthere(arrest2, arr[i]))
			count2++;
	}
	char k = 'k' ,w='w';
	if (count1 >= count2)
	{
		for (int i = 0; i < str.length() + 1; i++)
		{
			if (isthere(arrest2, arr[i]))
			{
				k = arrest[getindex(arrest2, arr[i])];
				arr[i] = k;

			}
		}
	}
	else
	{
		for (int i = 0; i < str.length() + 1; i++)
		{
			if (isthere(arrest, arr[i]))
			{
				w = arrest2[getindex(arrest, arr[i])];
				arr[i] = w;

			}
		}
	}

	string g = arr;
	cout << g;

	

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

int getindex( char arr[], char c)
{
	int k = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == c)
			k = i;
	}

	return k ;

}