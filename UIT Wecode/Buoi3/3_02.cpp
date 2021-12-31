#include <iostream> 
#include <math.h>
using namespace std; 

//Functions: 
 
//Variables: 
unsigned int n; 

bool Prime(int x){
    if (x<=1)
        return 0;
    else
        for (int i=2; i<=round(sqrt(x));i++){        //xet tu 2 -> Can bac 2 (x)
            if (x%i==0)                             //Neu x co uoc trong khoang 2 -> Can bac 2 (x)
                return 0;                            //Dem uoc
        }
    return 1;
}

int main(){
    cin>>n;
    if (n<=1)
        cout<<-1;
    else if (Prime(n))
        cout<<1;
    else 
        cout<<0;
    return 0; 
}