#include <iostream>
 
using namespace std; 

//Functions:

//Variables:

int main(){
    string s1,s2;
    string n;
    cin>>n;
    n+=" ";
    s1 = n+n+n+n+n+n;
    s1.erase(s1.size()-1,1);
    s2 = n+"        "+n;
    s2.erase(s2.size()-1,1);
    cout<<s1<<"\n"<<s2<<"\n"<<s2<<"\n"<<s1<<"\n";
    cout<<"     "<<n;
    cout<<"\n    "<<n<<""<<n;
    cout<<"\n   "<<n<<"  "<<n;
    cout<<"\n  "<<n<<"    "<<n;
    cout<<"\n "<<n<<"      "<<n;
    cout<<"\n"<<s1;
    return 0; 
}