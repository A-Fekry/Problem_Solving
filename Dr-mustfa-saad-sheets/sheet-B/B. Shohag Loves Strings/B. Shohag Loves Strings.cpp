#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string str;
		cin >> str;
		char* arr = new char[str.length() + 1];
		strcpy(arr, str.c_str());
		bool done = false;
		for (int k = 0; k < str.length(); k++)
		{
			if (str.length() == 1)
			{
				done = true;
				cout << -1 << endl;
				break;
			}
			if (k < str.length() - 1 && arr[k] == arr[k + 1])
			{
				done = true;
				cout << arr[k] << arr[k + 1] << endl;
				break;
			}
			else if (k < str.length() - 2 && arr[k] != arr[k + 1] && arr[k + 2] != arr[k + 1] && arr[k] != arr[k + 2])
			{
				done = true;
				cout << arr[k] << arr[k + 1] << arr[k + 2] << endl;
				break;
			}
		}
		if (!done)
			cout << "-1" << endl;
	}
}
