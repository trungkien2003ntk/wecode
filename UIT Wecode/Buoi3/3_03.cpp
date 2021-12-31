#include <iostream> 
 
using namespace std; 

//Functions: 
 
//Variables: 
unsigned int n;

int main(){
    cin>>n;
    unsigned long long sum=1;
    for (int i=2; i<n; i++){
        if (n%i==0)
            sum+=i;
    }

    cout<<sum;
    return 0; 
}