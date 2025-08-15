#include <iostream>
#include <string>
#include <cstring>
#include <set>
#pragma warning(disable : 4996)
using namespace std;

int getindex(char arr[],char arr2[], char i);

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char arrest2[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	string s;
	int n;
	cin >> n;
	cin >> s;
	
	char* arr = new char[n];
	strcpy(arr, s.c_str());
	set<int> c;
	for (int i = 0; i < n; i++)
	{
		c.insert(getindex(arrest, arrest2, arr[i]));
	}

	if (c.size() == 26)
		cout << "YES";

	else
		cout << "NO";


}

int getindex(char arr[],char ars[], char c)
{
	int k = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == c)
			k = i;
		if (ars[i] == c)
			k = i;

	}


	return k;

}