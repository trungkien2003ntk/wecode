#include <iostream> 
#include <math.h>

using namespace std;

float S1(float n) {
	float sum = 0;
	for (float i = 1; i <= n; i++) {
		int tinh = 1;
		for (float j = 1; j <= i; j++) {
			tinh = tinh * i;
		}
		sum += tinh;
	}
	return sum;
}

float S2(float n) {
	float giaithua = 1; float sum = 0;
	for (float i = 1; i <= n; i++) {
		giaithua *= i;
		sum += giaithua;
	}
	return sum ;
}

float S3(float n) {
	float tong = 0; float ans = 0;
	for (float i = 1; i <= n; i++) {
		tong += i;
		ans += 1.0 / tong;
	}
	return ans;
}

int main() {
	float n;
	cin >> n;

	cout << S1(n) << endl << endl;
	cout << S2(n) << endl << endl ;
	cout << S3(n);
}
// #include <math.h>
// #include <iostream>

// using namespace std;

// float Sum1(float x) {
//     if(x==1) return 1;
//     return pow(x,x) + Sum1(x-1) ;
// }

// float Sum2(float x) {
//     int D=1;
//     if(x==1) return 1;
//     else {
//         for(float i=1 ; i<=x;i++) {
//             D*=i;
//         }
//     return D + Sum2(x-1) ;
//     }
// }

// float Sum3(float x) {
//     int D=0;
//     if(x==1) return 1;
//     for(float i=1 ; i<=x;i++) {
//         D+=i;
//     }
//     return 1/(float) D +  Sum3(x-1) ;
// }

// int main()
// {
//   float x;
//   cin>>x;
//   if( x>=1 ) {
//       cout<<Sum1(x)<<endl;
//       cout<<Sum2(x)<<endl;      
//       cout<<Sum3(x)<<endl;      
//     }
//   return 0;
// }