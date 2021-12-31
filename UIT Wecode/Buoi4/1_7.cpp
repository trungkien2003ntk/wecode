#include <iostream>
#include <math.h>
using namespace std; 

//Functions:

//Variables:

char viethoa(char kt){
    return kt+'A'-'a';
}

int main(){
    char c1,c2;
    int x;
    cin>>c1>>c2>>x;
    cout<<"Ma ASCII cua ky tu "<<c1<<"',"<<c2<<"' lan luot la "<<(int)c1<<" va "<<(int)c2;
    cout<<"\nKhoang cach giua hai ky tu "<<c1<<"',"<<c2<<"' la "<<abs(c2-c1);
    cout<<"\nDang viet hoa cua ky tu "<<c1<<"'la"<<viethoa(c1)<<"'";
    cout<<"\n"<<x<<"la ma ASCII cua ky tu `"<<(char)x<<"'";

    return 0; 
}