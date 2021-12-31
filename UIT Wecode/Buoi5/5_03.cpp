#include <iostream>
using namespace std;

int largest_input(){
    int x[10000],max[10000];
    int i=-1,j=-1;
    i++;
    cin>>x[i];
    if (i==0)
        max[0]==x[0];
    if (max[j] < x[i]){
        max[j] == x[i];
    }


    if (x[i]==0)
        return max[j];
    return largest_input();

}
int main(){
	cout << largest_input();
}