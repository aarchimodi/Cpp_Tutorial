#include <iostream>
using namespace std;


 int sum(int a, int b){
    int z = a + b;
    cout << "sum is: " << z <<endl;
    return z;
}


int main(){
    int a, b;
    cout << "enter nos :" << endl;
    cin >>  a >> b;

    int res = sum(a,b);
    
    return 0;
    
}