#include <iostream>
using namespace std;
#define MAX 100

// ----------------------------------------------------------------
void Nhapmang(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
        cin >> arr[i];
}

char getFirstNumber(int x)
{
    char result;
    while (x >= 10)
        x = x / 10;
    result = (char)x;
    return result;
}

bool isBenford(int arr[], int arrSize)
{
    int countOne = 0, countFour = 0;
    char firstNumber;
    for (int i = 0; i < arrSize; i++)
    {
        firstNumber = getFirstNumber(arr[i]);
        if (firstNumber == 1)
            countOne++;
        else if (firstNumber == 4)
            countFour++;
    }

    if (countOne == 3 && countFour == 1)
        return 1;
    return 0;
}
// parameter : tham số   là biến trong khai báo function: VD:   int f(int a, int b, int c[])  -> a,b,c[] là tham số
// argument : đối số     là giá trị truyền vào tham số khi gọi function. VD: f(3,4,arr)

// f(x) = x^2 +2x+3;

// ----------------------------------------------------------------

int main()
{
    int a[MAX], n = 10;
    Nhapmang(a, n);
    if (isBenford(a, n) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}
