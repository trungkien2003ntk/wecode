#include <iostream>
#include <math.h>

using namespace std;

int a,b,c;

void nhap(){
    cin>>a>>b>>c;
}
bool vuong(int a,int b,int c){
    if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        return 1;
    else
        return 0;
}

int main(){
    nhap();
    cout<<fixed;
    cout.precision(2);
    
    if (a+b>c && b+c>a && c+a>b)
    {
        if (a==b || b==c || c==a)
            if (a==b && b==c)
                cout<<"Tam giac deu, ";
            else
                if (vuong(a,b,c))
                    cout<<"Tam giac vuong can, ";
                else
                    cout<<"Tam giac can, ";
        else
            if (vuong(a,b,c))
                cout<<"Tam giac vuong, ";
            else
                cout<<"Tam giac thuong, ";
        float p = (a+b+c)/(2.0);
        cout<<"dien tich = "<<sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else
        cout<<"Khong phai tam giac";
    return 0;
}
