#include <iostream>
#define N 100
using namespace std;

// Functions:

// Variables:

void transpose(float A[][N], float B[][N], int colNum, int rowNum, int &rowNum2, int &colNum2)
{
    int i, j;
    for (i = 0; i < colNum; i++)
        for (j = 0; j < rowNum; j++)
            B[i][j] = A[j][i];
    colNum2 = rowNum;
    rowNum2 = colNum;
}

void inputMatrix(float matrix[100][100], int &colNum, int &rowNum)
{
    cin >> rowNum >> colNum;

    for (int row = 0; row < rowNum; row++)
    {
        for (int col = 0; col < colNum; col++)
            cin >> matrix[row][col];
    }
}
void outputMatrix(float matrix[100][100], int colNum, int rowNum)
{
    for (int row = 0; row < rowNum; row++)
    {
        for (int col = 0; col < colNum; col++)
            if (col != colNum - 1)
                cout << matrix[row][col] << ' ';
            else
                cout << matrix[row][col];
        cout << endl;
    }
}

int main()
{
    float matrix[100][100], matrix2[100][100];
    int colNum, rowNum;
    inputMatrix(matrix, colNum, rowNum);
    transpose(matrix, matrix2, colNum, rowNum, rowNum, colNum);
    outputMatrix(matrix2, colNum, rowNum);
    return 0;
}