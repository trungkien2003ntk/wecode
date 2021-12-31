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

int main()
{
    int arr[100000], n;
    nhapMang(arr, n);
    // Small Check
    if (n < 2 || (arr[0] == arr[1]) && n == 2)
    {
        cout << 0;
        return 0;
    }
    else if (n == 2 && arr[0] != arr[1])
    {
        if (arr[0] > arr[1])
            cout << arr[1];
        else
            cout << arr[0];
        return 0;
    }

    // main Process
    int minPosition = 0, maxPosition = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[minPosition] > arr[i])
            minPosition = i;
        else if (arr[maxPosition] < arr[i])
            maxPosition = i;
    }
    if (arr[maxPosition] == arr[minPosition])
    {

        cout << 0;
        return 0;
    }
    int maxValue = arr[maxPosition];
    for (int i = 0; i < n; i++)
    {
        // cout << "i = " << i << ", max: " << maxValue << ' ' << arr[i] << endl;
        if (maxValue == arr[i])
            arr[i] = arr[minPosition];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[maxPosition] < arr[i])
            maxPosition = i;
    }
    cout << arr[maxPosition] << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << ' ';
    // }
    return 0;
}