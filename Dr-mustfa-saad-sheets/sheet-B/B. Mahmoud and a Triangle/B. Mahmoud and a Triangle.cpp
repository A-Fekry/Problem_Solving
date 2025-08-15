#include <iostream>

using namespace std;
#include <iostream>
using namespace std;

static void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

    if (n > 44)
        cout << "YES";
    else
    {
        quickSort(arr, 0, n - 1);
        int m = n - 2;
        bool done = false;
        for (int i = n - 1; i >= 2; i--)
        {
            while (arr[i] < arr[m] * 2)
            {
                if (arr[i] < (arr[m] + arr[m - 1]))
                {
                    done = true;
                    cout << "YES";
                    break;
                }
                m--;
            }
            if (done)
                break;
            m = i - 2;
        }
        if (!done)
            cout << "NO";
    }
}