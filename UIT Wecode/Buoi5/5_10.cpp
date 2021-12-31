#include <iostream>
using namespace std;
int modulo(int m, int n){
// ----------------------------------------------------------------
    if (m>=n)
        return modulo(m-n,n);
    return m;





// ----------------------------------------------------------------
}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}