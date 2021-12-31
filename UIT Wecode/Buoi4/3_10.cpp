#include <iostream>
#include <math.h>
using namespace std; 

//Functions:

//Variables:

bool Prime(int n) {
    if (n<=1)
        return 0;
    for (int i=2;i<=round(sqrt(n));i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}


int main(){
    int n;
    cin>>n;
    int count=0;
    for (int i=2;i<n;i++){
        if (Prime(i) && Prime(i+2) && i+2<n){
            cout<<i<<", "<<i+2<<endl;
            i++;
            count++;
        }
    }
    cout<<"Tong: "<<count<<" cap so sinh doi < "<<n;
    return 0; 
}