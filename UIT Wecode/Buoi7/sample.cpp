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
    float matrix[100][100];
    int colNum, rowNum;
    inputMatrix(matrix, colNum, rowNum);
    outputMatrix(matrix, colNum, rowNum);
    return 0;
}