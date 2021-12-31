#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int tg = a;
    a = b;
    b = tg;
}

void SapXep(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void XoaPhanTu(int a[], int &n, int pos)
{
    // Mang rong, khong the xoa.
    if (n <= 0)
    {
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if (pos < 0)
    {
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if (pos >= n)
    {
        pos = n - 1;
    }
    // Dich chuyen mang
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
}
int FindBySort(int a[], int n)
{
    SapXep(a, n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                XoaPhanTu(a, n, j);
            }
        }
    }
    return a[1];
}
void nhap(int a[], int &n)
{
    do
    {

        cin >> n;
    } while (n < 1 || n > 999);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

int main()
{
    int a[10000];
    int n;
    nhap(a, n);
    if ((n == 1) || (max(a, n) == min(a, n)))
    {
        cout << 0;
    }
    else
    {
        cout << FindBySort(a, n);
    }

    return 0;
}