#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	string str;
	cin >> str;
	int k = str.length();
	char* arr = new char[str.length() + 1];
	strcpy(arr, str.c_str());
	int m = 0;
	for (int i = k; i >= 0; i--)
	{
		if (arr[i] == '1')
			m++;
		else if (arr[i] == '2')
			m += 2;
		else if (arr[i] == '3')
			m += 3;
		else if (arr[i] == '4')
			m += 4;
		else if (arr[i] == '5')
			m += 5;
		else if (arr[i] == '6')
			m += 6;
		else if (arr[i] == '7')
			m += 7;
		else if (arr[i] == '8')
			m += 8;
		else if (arr[i] == '9')
			m += 9;
	}
	if (str.length() == 1)
		cout << 0;
	else
	{
		if (m < 10)
			cout << 1;
		else
		{
			int count = 0;
			while (m > 9)
			{
				int n = 0;
				count++;
				while (m > 0)
				{
					n += m % 10;
					m = m / 10;
				}
				m = n;
			}
			cout << count + 1;
		}
	}

}