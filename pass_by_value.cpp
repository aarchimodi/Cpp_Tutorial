#include <iostream>
using namespace std;


void doSomething(int num){
    // compiler came here with value num = 10 +5 =15
    num += 5;
    cout << num <<endl;

    // 15 + 5 = 20
    num += 5;

    // 20 will be printed
    cout << num << endl;
}



void withString(string s){
    s[0] = 't';
    cout << s << endl;
}  //compiler will print tarchi


// compiler starts compiling from here line by line 
int main(){

    // complier will execute line 16 and the value of num is 10
    int num = 10;


    // complier will execute line 20 and then it will move up towards the void function
    doSomething(num);

    // this will print 10 and NOT 20 MARK THE DIFFERENCE beacause the copy of num variable went above while compiling and not the original num var this is what we call pass by value bec the memory has stored the original value

    cout << num <<endl;


    // this same works with string as well
    string s = "aarchi";
    withString(s);

    // here it will print aarchi now
    cout << s << endl;
    
    return 0;
}