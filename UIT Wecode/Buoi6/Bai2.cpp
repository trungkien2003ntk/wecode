#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n, int y);

//----------------------------------------------------------------

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

void NhapmangSNT(int a[], int &n)
{
    cin >> n;
    int num = 2;
    int countNum = 0;
    while (countNum < n)
    {
        if (prime(num))
        {
            a[countNum] = num;
            countNum++;
        }
        num++;
    }
}

bool hasY(int x, int y)
{
    int lastNum = x % 10;
    x = x / 10;
    if (lastNum == y)
        return 1;
    while (x > 0)
    {
        int lastNum = x % 10;
        x = x / 10;
        if (lastNum == y)
            return 1;
    }
    return 0;
}

int SoPhanTuChuaY(int a[], int n, int y)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (hasY(a[i], y))
        {
            count++;
        }
    }
    return count;
}

//----------------------------------------------------------------

int main()
{
    int a[MAX], n, y;
    cin >> y;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << ' ';
    // }
    return 0;
}