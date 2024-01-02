#include <iostream>
using namespace std;

/*in pass by refernce just add & with the parameter and that will take the original value 
here the original (address)value of num is 10 and that will be taken and while printing the cout in main function 
the modified num value will printed and not the original value
*/

void reference(int &num){
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}


int main(){
    int num = 10;
    reference(num);

    // this will print 20 
    cout << num << endl;

    return 0;
}