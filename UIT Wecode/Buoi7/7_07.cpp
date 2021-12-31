#include <iostream>

using namespace std;

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
            cout << matrix[row][col] << ' ';
        cout << endl;
    }
}

bool isDiagonalMatrix(float matrix[100][100], int colNum, int rowNum)
{
    for (int row = 0; row < rowNum; row++)
        for (int col = 0; col < colNum; col++)
            if (matrix[row][col] != matrix[col][row])
                return 0;
    return 1;
}

int main()
{
    float matrix[100][100];

    int colNum, rowNum;

    inputMatrix(matrix, colNum, rowNum);

    if (isDiagonalMatrix(matrix, colNum, rowNum))
        cout << "Yes";
    else
        cout << "No";
    // outputMatrix(matrix, colNum, rowNum);
    return 0;
}