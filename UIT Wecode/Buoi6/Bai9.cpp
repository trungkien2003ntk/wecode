
#include <iostream>

using namespace std;

// Functions:

// Variables:

void nhapMang(int arr[], int &arrSize)
{
    cin >> arrSize;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << ' ';
    }
}

void removeKElementsFromP(int arr[], int &arrSize, int k, int p)
{
    bool atDeletedPosition[100000];
    fill_n(atDeletedPosition, arrSize, 0);

    for (int i = p; i < k + p; i++)
        atDeletedPosition[i] = 1;

    int arrCs = -1;
    for (int i = 0; i < arrSize; i++)
        if (!atDeletedPosition[i])
        {
            arrCs++;
            arr[arrCs] = arr[i];
        }
    arrSize = arrCs + 1;
}

int main()
{
    int arr[100000], arrSize;
    nhapMang(arr, arrSize);

    int p, k;

    cin >> p >> k;

    removeKElementsFromP(arr, arrSize, k, p);

    xuatMang(arr, arrSize);
    return 0;
}