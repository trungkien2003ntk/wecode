#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    float p=(a+b+c)/2;
    
    float Area=sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout<<fixed;
    cout.precision(2);
    
    cout<<Area;
    return 0;
}