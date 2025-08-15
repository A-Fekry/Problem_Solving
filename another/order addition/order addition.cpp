#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	string str;
	cin >> str;
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());

	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	for (int i = 0; i < str.length() + 1; i++)
	{
		if (arr[i] == '1')
			count1++;
		else if (arr[i] == '2')
			count2++;
		else if (arr[i] == '3')
			count3++;
		else
			count4++;
	}

	for (int i = (count1 + count2) * 2; i < str.length() + 1; i += 2)
	{
		arr[i] = '3';
	}
	for (int i = 0 ; i < count1 * 2 - 1 ; i += 2)
	{
		arr[i] = '1';
	}
	for (int i = 1 ; i < str.length() -1 ; i += 2)
	{
		arr[i] = '+';
	}
	for (int i = (count1) * 2; i < (count1 + count2) * 2; i += 2)
	{
		arr[i] = '2';
	}
		
	string s = arr;
	cout << s;


}