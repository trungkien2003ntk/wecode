
#include <iostream>
// ----------------------------------------------------------------
using namespace std;

int gcd(int n,int m){
    if (m==0)
        return n;
    if (n==0)
        return m;
    if (m==n)
        return m;
    if (m>n)
        return gcd(m-n,n);
    return gcd(m,n-m);
}



// ----------------------------------------------------------------
int main() {

	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}