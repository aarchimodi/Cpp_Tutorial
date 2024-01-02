#include <iostream>
using namespace std;


// u can pass multiple parameters of different datatypes
void multipleParameters(string name, int age, char grade, float salary){
cout << "your info :" << name << " " << age << " " << grade << " "<< salary <<endl;

}

int main(){
    multipleParameters("rhythm", 21, 'A', 4.5);
    multipleParameters("ram", 22, 'A', 6.5);
    return 0;
}