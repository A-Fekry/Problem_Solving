#include <iostream>

using namespace std;
struct ob
{
    int b;
    int f;
    long long bs;
    long long fs;
};

static void quickSort(ob arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high].f;
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j].f < pivot) {
                i++;
                swap(arr[i].f, arr[j].f);
            }
        }
        swap(arr[i + 1].f, arr[high].f);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
struct op {
    int type;
    int l;
    int r;
};

int main()
{
    int n;
    cin >> n;
    ob* arr1 = new ob[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i].b;
        arr1[i].f = arr1[i].b;
        if (i == 0)
            arr1[i].bs = arr1[i].b;
        else 
            arr1[i].bs = arr1[i].b + arr1[i - 1].bs;

    }
    int m;
    cin >> m;
    op* arr3 = new op[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr3[i].type;
        cin >> arr3[i].l;
        cin >> arr3[i].r;

    }
    quickSort(arr1, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            arr1[i].fs = arr1[i].f;
        else
            arr1[i].fs = arr1[i - 1].fs + arr1[i].f;
    }
    for (int i = 0; i < m; i++)
    {
        if (arr3[i].type == 1)
        {
            if (arr3[i].l != 1)
                cout << (arr1[arr3[i].r - 1].bs - arr1[arr3[i].l - 2].bs) << endl;
            else
                cout << (arr1[arr3[i].r - 1].bs) << endl;
        }
        else
        {
            if (arr3[i].l != 1)
                cout << (arr1[arr3[i].r - 1].fs - arr1[arr3[i].l - 2].fs) << endl;
            else
                cout << (arr1[arr3[i].r - 1].fs) << "\n";
        }
    }

}