#include <iostream>

using namespace std;

// Functions:

// Variables:

int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void inputMatrix(int matrix[100][100], int &num)
{
    cin >> num;
    int colNum, rowNum;
    colNum = rowNum = num;
    for (int row = 0; row < rowNum; row++)
    {
        for (int col = 0; col < colNum; col++)
            matrix[row][col] = Fibonacci(row + col + 1);
    }
}
void outputMatrix(int matrix[100][100], int num)
{
    int colNum, rowNum;
    colNum = rowNum = num;
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
    int matrix[100][100];
    int num;
    inputMatrix(matrix, num);
    outputMatrix(matrix, num);
    return 0;
}