#include <iostream>

using namespace std;
struct op {
	int z = 0;
	int x = 0;
};
int main()
{
	int N, Q;
	cin >> N >> Q;
	op* arr1 = new op[N];
	for (int i = 0; i < Q; i++)
	{
		int b = 0, s = 0;
		cin >> b >> s;
		if (b == 1)
		{
			if (arr1[s - 1].x == s)
				arr1[s - 1].z++;
			else
			{
				arr1[s - 1].x = s;
				arr1[s - 1].z++;
			}
		}
		else if (b == 2)
		{
			cout << arr1[s - 1].z << "\n";
		}
	}
	
}