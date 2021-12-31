
#include <iostream>
#include <iomanip>
using namespace std;
// ----------------------------------------------------------------
#include <math.h>

float calculate(int n){
    if (n==1)
        return 1;
    return sqrt(calculate(n-1)+n);
}

// ----------------------------------------------------------------
int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
    return 0;
}
