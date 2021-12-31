#include <iostream>
 
using namespace std; 

//Functions:

//Variables:
int gcd(int m,int n){
    if (m==n)
        return m;
    if (m>n)
        return gcd(m-n,n);
    return gcd(m,n-m);

}

int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}