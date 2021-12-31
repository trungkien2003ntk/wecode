
#include <iostream>
#include <math.h>
using namespace std;

bool Prime(int n) {
    if (n<=1)
        return 0;
    for (int i=2;i<=round(sqrt(n));i++){
        if (n%i==0)
            return 0;
    }
    return 1;
}


int Tongnt(int n){
    int s=0,count=0;
    int num=2;
    while (count!=n){
        if (Prime(num)){
            s+=num;
            count++;
        }
        num++;
    }
    return s;
}


int main(){
    int n,count=0;
    do{
        count++;
        cin>>n;
        if (0<n && n<=50){
            cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<Tongnt(n);
        }
        else {
            cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai.";
        }
    }while (n<=0 || n>50);


}