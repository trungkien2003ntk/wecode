#include <iostream> 
 
using namespace std; 

//Functions: 
 
//Variables: 

int getGender(char chr){
    if (chr=='M'||chr=='m')
            return 1;
        else
            if (chr=='F'||chr=='f')
                return 0;
    return 3;
}
int main(){
    unsigned int age;
    char gender;
    cin>>age;
    cin>>gender;
    if (age>=21)
    if (gender=='M' || gender == 'm')
        cout<<1;
    else{
        if (gender =='f' ||gender=='F')
            cout<<2;
    }
else
    if (gender=='M' || gender == 'm')
        cout<<3;
    else
        if (gender =='f' ||gender=='F')
            cout<<4;
        else 
            cout<<"I do now know why";
        
    return 0; 
}