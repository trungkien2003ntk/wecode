#include <iostream>
 
using namespace std; 

//Functions:

//Variables:

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int money=0;
    for (int i=0; i<n; i++){
        money+=a*b;
        a++;
        b++;
    }
    cout<<money;
    return 0; 
}