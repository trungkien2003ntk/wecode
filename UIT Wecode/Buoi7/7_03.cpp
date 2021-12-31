#include <iostream>

using namespace std;
const int MAXR = 100;
const int MAXC = 100;

void NhapMaTran(int a[100][100], int &n)
{
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
            cin >> a[row][col];
    }
}
void outputMatrix(float a[100][100], int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
            if (col != n - 1)
                cout << a[row][col] << ' ';
            else
                cout << a[row][col];
        cout << endl;
    }
}
bool isMaTranDonVi(int a[100][100], int n)
{
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
            if (row == col && a[row][col] == 1)
                continue;
            else if (row != col && a[row][col] != 0)
                return 0;
            else if (row == col && a[row][col] != 1)
                return 0;
    return 1;
}

int main()
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}