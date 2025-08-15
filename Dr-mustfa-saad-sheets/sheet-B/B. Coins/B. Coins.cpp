#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

bool isthere(string s, char n);
int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	string ss1, ss2, ss3;

	if (isthere(s1, 'A') && isthere(s1, 'B'))
		ss1 = s1;
	else if (isthere(s2, 'A') && isthere(s2, 'B'))
		ss1 = s2;
	else
		ss1 = s3;
	if (isthere(s1, 'C') && isthere(s1, 'B'))
		ss2 = s1;
	else if (isthere(s2, 'C') && isthere(s2, 'B'))
		ss2 = s2;
	else
		ss2 = s3;
	if (isthere(s1, 'C') && isthere(s1, 'A'))
		ss3 = s1;
	else if (isthere(s2, 'A') && isthere(s2, 'C'))
		ss3 = s2;
	else
		ss3 = s3;


	if ((ss1 == "A>B" || ss1 == "B<A") && (ss2 == "B>C" || ss2 == "C<B") && (ss3 == "C<A" || ss3 == "A>C"))
		cout << "CBA";
	else if ((ss1 == "A>B" || ss1 == "B<A") && (ss2 == "B<C" || ss2 == "C>B") && (ss3 == "C<A" || ss3 == "A>C"))
		cout << "BCA";
	else if ((ss1 == "A>B" || ss1 == "B<A") && (ss2 == "B<C" || ss2 == "C>B") && (ss3 == "C>A" || ss3 == "A<C"))
		cout << "BAC";
	else if ((ss1 == "A<B" || ss1 == "B>A") && (ss2 == "B>C" || ss2 == "C<B") && (ss3 == "C>A" || ss3 == "A<C"))
		cout << "ACB";
	else if ((ss1 == "A<B" || ss1 == "B>A") && (ss2 == "B<C" || ss2 == "C>B") && (ss3 == "C>A" || ss3 == "A<C"))
		cout << "ABC";
	else if ((ss1== "A<B" || ss1 == "B>A") && (ss2 == "B>C" || ss2 == "C<B") && (ss3 == "C<A" || ss3 == "A>C"))
		cout << "CAB";
	else
		cout << "Impossible";

}

bool isthere(string s, char n)
{
	char* arr = new char[s.length() + 1];
	strcpy(arr, s.c_str());

	bool k = false;
	for (int i = 0; i < 3; i++)
	{
		if (n == arr[i])
		{
			k = true;
			break;
		}
	}
	return k;
}