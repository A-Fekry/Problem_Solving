#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	int k,count=0;
	cin >> k;
	string s;
	cin >> s;

	char* arr = new char[s.length() + 1];
	strcpy(arr, s.c_str());

	for (int i = 0; i < s.length(); i++)
	{
		if (arr[i] == arr[i + 1])
			count++;

	}

	cout << count;

}