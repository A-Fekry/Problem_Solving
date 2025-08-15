#include <iostream>

using namespace std;

int main()
{
	char arrest[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	
	int n, k;

	cin >> n >> k;
	char* arr = new char[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (count == k)
			count = 0;

		arr[i] = arrest[count];
		count++;
	}

	string s = arr;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}

}