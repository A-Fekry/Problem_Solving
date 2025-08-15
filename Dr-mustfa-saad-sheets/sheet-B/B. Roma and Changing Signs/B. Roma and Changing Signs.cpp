#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int * arr = new int[n];
    int neg = 0;
    int pos = 0;
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
            neg++;
        else
            pos++;
    }
    if (k <= neg)
    {
        for (int i = 0; i < k; i++)
            arr[i] *= (- 1);
    }
    else if(neg > 0)
    {
        for (int i = 0; i < neg; i++)
            arr[i] *= (-1);

        int diff = k - neg;
        if (diff % 2 == 1 && arr[neg - 1] != 0)
        {
            if (arr[neg - 1] > arr[neg])
                arr[neg] *= -1;
            else
                arr[neg - 1] *= -1;
        }
    }
    else
    {
        if (k % 2 == 1)
            arr[0] *= -1;
    }
    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << sum;

}

