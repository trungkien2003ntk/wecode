#include <iostream> 
 
using namespace std; 

//Functions: 
 
//Variables: 

int main(){
    double a,b;
    cin>>a>>b;
    if (a==0) 
        if (b==0)
            cout<<"ℝ";
        else
            cout<<"Ø";
    else
        cout<<"{"<<-b/a<<"}";
    return 0; 
}