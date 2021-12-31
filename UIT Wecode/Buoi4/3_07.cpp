#include <iostream>
#include <math.h>
using namespace std; 

//Functions:

//Variables:

int main(){
    float n;
    float pi=0;
    cin>>n;
    for (float i=0;i<=n;i++){
        pi+=pow(-1,i)*(1.0/(2*i+1));
    }
    pi*=4;
    cout<<pi;

    return 0; 
}