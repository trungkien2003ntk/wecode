#include <iostream>

using namespace std;

// Functions:

// Variables:

void inputMatrix(float matrix[100][100], int &colNum, int &rowNum)
{
    cin >> rowNum >> colNum;

    for (int row = 0; row < rowNum; row++)
    {
        for (int col = 0; col < colNum; col++)
            cin >> matrix[row][col];
    }
}

float sumDiagonalMatrix(float matrix[100][100], int colNum, int rowNum)
{
    float res = 0;

    for (int row = 0; row < rowNum; row++)
    {
        res += matrix[row][row];
    }

    return res;
}

int main()
{
    float matrix[100][100];
    int colNum, rowNum;
    inputMatrix(matrix, colNum, rowNum);
    cout << sumDiagonalMatrix(matrix, colNum, rowNum);
    return 0;
}