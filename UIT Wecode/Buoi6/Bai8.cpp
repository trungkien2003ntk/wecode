#include <bits/stdc++.h>

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

void removeAllElementsWithXValue(int arr[], int &arrSize, int x)
{
    int countX = 0;
    int arrCs = -1;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] != x)
        {
            arrCs++;
            arr[arrCs] = arr[i];
        }
        else
            countX++;
    }
    arrSize -= countX;
}

int main()
{
    int arr[100000], arrSize;
    nhapMang(arr, arrSize);

    int x;
    cin >> x;

    removeAllElementsWithXValue(arr, arrSize, x);

    xuatMang(arr, arrSize);

    return 0;
}