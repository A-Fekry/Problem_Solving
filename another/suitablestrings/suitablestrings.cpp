#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	if (s1.length() == s2.length())
		cout << "-1";
	else if (s1.length() >= s2.length())
		cout << s1.length() + 1;
	else
		cout << s2.length() + 1;


}