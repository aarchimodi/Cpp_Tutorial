#include <iostream>
using namespace std;

// void function
void printName(){
    cout << "fjfhjg" <<endl;
}

// parameterised function
void printName1(string name){
    cin >> name;
    cout << "Your name is " <<name <<endl;
}


// return function
// take 2 nos and print their sum
int printSum(int a, int b){
    int sum = a + b;
    return sum;
}



int main(){
    printName();

    string name;
    printName1(name);

   
    int a, b;
    cout << "enter 2 nos :" <<endl ;
    cin >> a >> b;
    int res = printSum(a,b);
    cout << "sum is :" << res <<endl;
    return 0;


    
}