// #include <iostream>
 

// // ----------------------------------------------------------------

// using namespace std; 

// //Functions:

// //Variables:

// int CountSize(int n){
//     int count=0;
//     while(n!=0){
//         count++;
//         n/=10;
//     }
//     return count;
// }

// long long Power(int x, int num){
//     long long ans=1;
//     for (int i= 1; i<=num; i++){
//         ans*=x;
//     }
//     return ans;
// }

// int reverse(int num){
//     int num_rev=0;
//     int mod;
//     int num_temp = 0;
//     int NumSize = CountSize(num);
//     int temp=Power(10,NumSize-1);
//     while (num!=0){
//         mod = num % 10;
//         num_rev+=mod*temp;
//         temp /=10;
//         num /=10;
//     }
//     return num_rev;
// }

// bool Prime(int n) {
//     if (n<=1)
//         return 0;

//     if (n<=10){    
//         for (int i=2;i<=n-1;i++){
//             if (n%i==0)
//                 return 0;
//         }
//     }
//     else{
//         for (int i=2;i<=n/2+1;i++){
//             if (n%i==0)
//                 return 0;
//         }
//     }
//     return 1;
// }


// int main(){
//     int a,b;
//     cin>>a>>b;
//     int count=0;
//     for (int i=a;i<=b;i++){
//         if (Prime(i) && Prime(reverse(i)))
//             count++;
//     }
//     cout<<count;
//     return 0; 
// }

#include <iostream>

using namespace std;

bool ktra(int x){
    if(x<2) return false;
    for(int i = 2; i*i <= x; i++)
        if(x%i==0) return false;
    return true;
}

int daoso (int x)
{
    int y=0;
    while (x>0) {
        y+=x%10;
        y*=10;
        x=(x-x%10)/10;
        
    }
    return y/10;
}

int main()
{
    int a,b,s=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++) {
        if(ktra(i) && ktra(daoso(i))) {s++;}
    }
    cout<<s;
    return 0;
}