#include <iostream>

using namespace std;

struct ob {
    int x;
    int y;
};
int main()
{
    int P, Q, R, L;
    cin >> P >> Q >> R >> L;

    ob* arr1 = new ob[P];
    ob* arr2 = new ob[Q];
    for (int i = 0; i < P; i++)
    {
        cin >> arr1[i].x;
        cin >> arr1[i].y;
    }
    for (int i = 0; i < Q; i++)
    {
        cin >> arr2[i].x;
        cin >> arr2[i].y;
    }
    bool done = false;
    int count = 0;
    for (int i = R; i <= L; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            for (int y= 0; y < P; y++)
            {
                if ((arr2[j].y + i >= arr1[y].x && arr2[j].x + i <= arr1[y].y) || (arr2[j].x + i >= arr1[y].x  && arr2[j].x + i <= arr1[y].y))
                {
                    done = true;
                    count++;
                }
                if (done)
                    break;
            }
            if (done)
            {
                done = false;
                break;
            }
        }
    }
    cout << count;
}

