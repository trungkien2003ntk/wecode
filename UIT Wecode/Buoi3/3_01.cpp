#include <iostream> 
 
using namespace std; 

//Functions: 
 
//Variables: 
int x;

long long Fibo(int n){
    long long arr[10000];
    arr[0]=0;
    arr[1]=1;
    long long arr_last=arr[1];
    if (n>1)
        for (int x=2; x<=n; x++){
            arr[x]=arr[x-1]+arr[x-2];
            if (x==n){
                arr_last = arr[x];
            }
        }
    return arr_last; 
}

int main(){
    cin>>x;
    if (1<=x && x<=30)
        cout<<Fibo(x);
    else
        cout<<"So "<<x<<" khong nam trong khoang [1,30].";
    return 0; 
}