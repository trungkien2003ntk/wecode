#include <iostream> 


// ----------------------------------------------------------------
using namespace std;
bool dk=0;

int reverse(int n){
    if (n<10 && n>0)
        return n;
    if (n%10!=0 && dk ==0)
        dk=1;
    if (dk ==1)
        cout<<n%10;
    return reverse(n/10);
}



// ----------------------------------------------------------------
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}