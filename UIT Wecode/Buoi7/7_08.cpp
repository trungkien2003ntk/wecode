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

bool isDiagonalMatrix(float matrix[100][100], int colNum, int rowNum)
{
    bool hasOneNumberIsNot1 = false;
    int countColNot0 = 0, posCol;
    for (int row = 0; row < rowNum; row++)
        for (int col = 0; col < colNum; col++)
        {
            if (col == row && matrix[row + 1][col] != 0)
            {
                countColNot0++;
                posCol = col;
            }
        }

    // cout << posCol << endl;
    if (countColNot0 > 1)
        return 0;

    else
    {
        for (int row = 0; row < rowNum; row++)
            for (int col = 0; col < colNum; col++)
            {
                if (row == col && matrix[row][col] != 1)
                    return 0;
                else if (row != col)
                {
                    if (col == posCol && row < row / 2 && matrix[row][col] != 0)
                        return 0;
                    else if (col != posCol && matrix[row][col] != 0)
                        return 0;
                }
            }
    }

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