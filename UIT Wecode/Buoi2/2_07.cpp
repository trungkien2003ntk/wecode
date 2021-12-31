#include <iostream> 
#include <math.h>

using namespace std; 

//Functions: 
 
//Variables: 

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    cout<<fixed;
    cout.precision(0);
    float delta = b*b-4*a*c;
    if (delta>0){
        cout<<"PT co hai nghiem phan biet:"<<"\n\n";
        cout<<"x1 = "<<(-b+sqrt(delta))/(2*a)<<"\nx2 = "<<(-b-sqrt(delta))/(2*a);
    }
    else    
        if (delta==0){
            cout<<"PT co nghiem kep: x1 = x2 = "<<-b/(2*a);
        }
        else
            cout<<"PTVN";
    return 0; 
}