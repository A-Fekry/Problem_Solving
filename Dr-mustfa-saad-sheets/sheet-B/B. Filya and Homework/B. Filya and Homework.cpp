#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set<int> nums;
    int arrnum[4]{};
    int count = 0;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        nums.insert(arr[i]);
        if (nums.size() > m)
        {
            arrnum[count] = arr[i];
            count++;
            m = nums.size();
        }
        if (m > 3)
        {
            cout << "NO";
            break;
        }
    }
    if (m <= 3)
    {
        if (m < 3)
        {
            cout << "YES";
        }
        else
        {
            int max = arrnum[0];
            int z = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arrnum[i] > max)
                {
                    max = arrnum[i];
                    z = i;
                }
            }
            int tmep;
            if (z != 2)
            {
                tmep = arrnum[2];
                arrnum[2] = arrnum[z];
                arrnum[z] = tmep;
            }
            if (arrnum[2] - arrnum[1] == 2 * (arrnum[2] - arrnum[0]) || arrnum[2] - arrnum[0] == 2 * (arrnum[2] - arrnum[1]))
                cout << "YES";
            else
                cout << "NO";
        }
    }
}

