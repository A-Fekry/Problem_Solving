#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
int getindex(char arr[], char arr2[], char i);

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char arrest2[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	string s1, s2;
	cin >> s1 >> s2;
	
	char* arr = new char[s1.length()+1];
	int count1 = 0, count2 = 0;
	strcpy(arr, s1.c_str());
	char* arr2=new char[s2.length()+1];
	strcpy(arr2, s2.c_str());
	for (int t = 0; t < s2.length()+1; t++)
	{
		if (getindex(arrest, arrest2, arr[t]) > getindex(arrest, arrest2, arr2[t]))
		{
			count1 = 1000000;
			break;
		}

		else if (getindex(arrest, arrest2, arr[t]) < getindex(arrest, arrest2, arr2[t]))
		{
			count2 = 1000000;
			break;
		}

	}

	delete[]arr;
	delete[]arr2;
	if (count1 == count2)
		cout << "0";
	else if (count1 > count2)
		cout << "1";
	else
		cout << "-1";

}

int getindex(char arr[], char arr2[], char c )
{
	int k = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == c)
			k = i;
	}

	for (int j = 0; j < 26; j++)
	{
		if (arr2[j] == c)
			k = j;
	}
	return k+1;
	
}
