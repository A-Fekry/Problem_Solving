#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char arrest2[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	int arr1[26];
	int arr2[26];
	for (int i = 0; i < 26; i++)
	{
		arr2[i] = 0;
		arr1[i] = 0;
	}
	string str;
	cin >> str;
	char* arrc = new char[str.length() + 1];
	strcpy(arrc, str.c_str());
	for (int i = 0; i < str.length(); i++)
	{
		int m = arrc[i];
		if (m < 91)
			arr1[m - 65]++;
		else
			arr2[m - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr1[i] > 0)
			cout << arrest2[i] << " " << arr1[i] << endl;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr2[i] > 0)
			cout << arrest[i] << " " << arr2[i] << endl;
	}
}