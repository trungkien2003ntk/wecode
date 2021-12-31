#include <iostream>

using namespace std;
float F(float x,int n) {
    int a;
    if (n % 2 == 0)
        a = 1;
    else
        a = -1;
    float temp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
        temp = temp * x / i;
    return a * temp;
}
int main()
{
    cout<<fixed;
    cout.precision(4);
    
    float x, ans =0;
    cin >> x;
    int n = 0;
    while (abs(F(x, n)) > 0.00001) {
        ans += F(x, n);
        n++;
    }
    cout << ans << endl;
    return 0;
}