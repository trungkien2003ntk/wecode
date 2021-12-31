
#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;

    a = round(a*n)/(float)n;
    if (a-(int)a ==0){
        std::cout<<std::fixed;
        std::cout.precision(0);
    }
    else{
        std::cout<<std::fixed;
        std::cout.precision(9);
    }
    std::cout<<a;
    return 0;
}