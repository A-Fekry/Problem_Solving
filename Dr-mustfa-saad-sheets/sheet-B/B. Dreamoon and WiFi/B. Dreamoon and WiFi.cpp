#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	char* arr1 = new char[s1.length() + 1];
	strcpy(arr1, s1.c_str());
	char* arr2 = new char[s2.length() + 1];
	strcpy(arr2, s2.c_str());
	int countori = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (arr1[i] == '+')
			countori++;
		else
			countori--;
	}
	int countmay = 0, count3 = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (arr2[i] == '+')
			countmay++;
		else if (arr2[i] == '-')
			countmay--;
		else
			count3++;
	}
	if (countori - countmay > count3 || countmay - countori > count3)
		cout << 0.000000000;
	else
	{
		if (count3 == 0 && countori == countmay)
			cout << 1.0000000000;
		else
		{
			if (countori - countmay == count3)
				cout << (double)1 / pow (2 ,count3);
			else
			{
				int dif;
				if (countori - countmay > 0)
					dif = countori - countmay;
				else
					dif = (countori - countmay) * -1;
				int x = 1, z = 1, y = 1;
				for (int i = 1; i <= count3; i++)
					x *= i;
				int to = (dif + count3) / 2;
				for (int i = 1; i <= to; i++)
					z *= i;
				for (int i = 1; i <= count3 - to; i++)
					y *= i;
				double fin = (x / (z * y)) / pow(2, count3);
				cout << setprecision(9) << fin;;

			}
		}
	}

}