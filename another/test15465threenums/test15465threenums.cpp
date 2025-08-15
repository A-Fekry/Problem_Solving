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
    

    if (S <= K)
    {
        int m;
        m = ((S + 2) * (S + 1)) / 2;
        cout << m;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i <= K; i++)
        {
            if (S - i <= K)
            {
                sum += S - i + 1;
            }
            else  if (S - i <= 2 * K)
            {
                sum += 2 * K - S + i + 1;
            }
        }
            cout << sum;
    }


}