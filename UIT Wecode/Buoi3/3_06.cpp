#include <iostream> 
 
using namespace std; 

//Functions: 
 
//Variables: 


float S1(float n,float x){
    float kq=1,lt=1;
    if (x==0 || n==0) return 1;
    for (long long i=1;i<=n;i++){
        lt*=x;
        kq+=lt;
    }
    return kq;
}

float S2(float n,float x){
    float kq=1,lt=1;
    for (long long i=2;i<=2*n;i+=2){
        lt*=x*x;
        kq+=lt;
    }
    return kq;
}

float S3(float n,float x){
    float kq=1,lt=1,gt=1;
    for (float i=1; i<=n;i++){
        gt*=i;  //giai thua
        lt*=x;  //luy thua
        kq+=lt/(float)gt;
    }
    return kq;
}

int main(){
    float n,x;
    cin>>n>>x;
    cout<<S1(n,x)<<endl;
    cout<<S2(n,x)<<endl;
    cout<<S3(n,x)<<endl;
    return 0; 
}

// #include <iostream>

// using namespace std;

// float Sum1(float x,float n) {
//     float D=1;
//     if(n==0 || x==0) return 1;
//     for(float i=1; i<=n;i++) {D*=x;}
//     return D + Sum1(x,n-1) ;
// }

// float Sum2(float x , float n) {
//     float D=1;
//     if(n==0 || x==0) return 1;
//     for(float i=1; i<=2*n;i++) {D*=x;}
//     return D + Sum2(x,n-1) ;
// }

// float Sum3(float x , float n) {
//     float D=1;
//     if(n==0 || x==0) return 1;
//     for(float i=1; i<=n;i++) {D=D*x/(float)i;}
//     return D + Sum3(x,n-1) ;
// }

// int main()
// {
//   float x,n;
//   cin>>n>>x;
//   if( x>=0 && n>=0 ) {
//       cout<<Sum1(x,n)<<endl;
//       cout<<Sum2(x,n)<<endl;      
//       cout<<Sum3(x,n)<<endl;      
//     }
//   return 0;
// }
