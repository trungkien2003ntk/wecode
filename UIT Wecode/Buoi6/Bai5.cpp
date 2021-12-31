#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100000

// ----------------------------------------------------------------

void Nhapmang(int arr[], int &arrSize)
{
    cin >> arrSize;
    for (int i = 0; i < arrSize; i++)
        cin >> arr[i];
}

void insertXIntoKthPosition(int arr[], int &arrSize, int x, int k)
{
    int arrSizeTemp = arrSize;

    for (int i = arrSize; i >= k + 1; i--)
        arr[i] = arr[i - 1];

    arrSize = arrSizeTemp + 1;
    arr[k] = x;
}

void xuatMang(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << ' ';
}

// ----------------------------------------------------------------

int main()
{
    int a[MAX], n;
    Nhapmang(a, n);
    int x, k;
    cin >> x >> k;

    insertXIntoKthPosition(a, n, x, k);

    xuatMang(a, n);
    return 0;
}