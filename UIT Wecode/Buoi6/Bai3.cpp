#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

// ----------------------------------------------------------------

bool prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= round(sqrt(n)); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void Nhapmang(int arr[], int &arrSize)
{
    cin >> arrSize;
    bool hasPrime = 0;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
        if (prime(arr[i]))
        {
            cout << arr[i] << ' ';
            hasPrime = 1;
        }
    }
    if (!hasPrime)
        cout << 0;
}

// ----------------------------------------------------------------

int main()
{
    int a[MAX], n = 10;
    Nhapmang(a, n);

    return 0;
}
