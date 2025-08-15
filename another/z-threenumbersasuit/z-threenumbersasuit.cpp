#include <iostream>

using namespace std;
struct num {
    int A;
    int B;
    int c;
};
int main()
{
    int K, S;
    cin >> K >> S;
    num numbers[1000];
    int count = 0;

    if (S > K)
    {
        for (int x = 0; x <= K; x++)
        {
            for (int y = K; y >= 0; y--)
            {
                if (S - (x + y) <= K)
                {
                    int z = S - (x + y);
                    numbers[count].A = x;
                    numbers[count].B = y;
                    numbers[count].c = z;

                    count++;
                }
                if (S - x > 2 * K || S - x - y > K || x + y > S)
                    break;
            }
        }
        int sum = 0;
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {

            }

        }
        for (int i = 0; i < count; i++)
        {
            if (numbers[i].A == numbers[i].B && numbers[i].B == numbers[i].c && numbers[i].A == numbers[i].c)
                sum += 1;

            else if (numbers[i].A == numbers[i].B || numbers[i].B == numbers[i].c || numbers[i].A == numbers[i].c)
                sum += 3;
            else
                sum += 6;
        }
        cout << sum;
    }
    else
    {

    }
}