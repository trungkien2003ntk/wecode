
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

void addRemainingElementFromX(int arr[], int arrSize, int start, int arrRes[], int &resCs)
{
    for (int i = start; i < arrSize; i++)
    {
        resCs++;
        arrRes[resCs] = arr[i];
    }
}

void combineTwoArraysButStillAscending(int arr1[], int arrSize1, int arr2[], int arrSize2, int arrRes[], int &arrResSize)
{
    int i1 = 0;
    int i2 = 0;
    int resCs = -1;
    while (i1 < arrSize1 && i2 < arrSize2)
    {
        if (arr1[i1] < arr2[i2])
        {
            resCs++;
            arrRes[resCs] = arr1[i1];
            i1++;
        }
        else
        {
            resCs++;
            arrRes[resCs] = arr2[i2];
            i2++;
        }
    }
    if (i1 < arrSize1)
        addRemainingElementFromX(arr1, arrSize1, i1, arrRes, resCs);
    else if (i2 < arrSize2)
        addRemainingElementFromX(arr2, arrSize2, i2, arrRes, resCs);
    arrResSize = resCs + 1;
}

int main()
{
    int arr1[100000], arr2[100000], arrSize1, arrSize2;
    nhapMang(arr1, arrSize1);
    nhapMang(arr2, arrSize2);
    int arrRes[100000], arrResSize;

    combineTwoArraysButStillAscending(arr1, arrSize1, arr2, arrSize2, arrRes, arrResSize);

    xuatMang(arrRes, arrResSize);
    return 0;
}