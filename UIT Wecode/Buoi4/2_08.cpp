#include <iostream>

using namespace std; 

//Functions:

//Variables:

int main(){
    float T,L,H,tb;
    cin>>T>>L>>H;
    tb = (T+L+H)/3;
    cout<<fixed;
    cout.precision(2);
    
    cout<<"DTB = "<<tb<<endl;
    cout<<"Loai: ";
    if (9<=tb && tb<=10)
        cout<<"XUAT SAC";
    else if (8<=tb && tb<9)
        cout<<"GIOI";
    else if (7<=tb && tb<8)
        cout<<"KHA";
    else if (6<=tb && tb<7)
        cout<<"TB KHA";
    else if (5<=tb && tb<6)
        cout<<"TB";
    else if (4<=tb && tb<5)
        cout<<"YEU";
    else if (tb<4)
        cout<<"KEM";
    
    
    return 0; 
}