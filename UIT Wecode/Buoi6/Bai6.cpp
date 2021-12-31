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
    int maxPosition = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[maxPosition] < arr[i])
            maxPosition = i;
    }
    int count = 0;
    cout << arr[maxPosition] << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[maxPosition] == arr[i])
            count++;
    }
    cout << count;

    return 0;
}