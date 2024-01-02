#include <iostream>
using namespace std;


void printName(string fname, string lname){
    
    cout << fname <<" "<< lname << endl;
}

// default parameter value 
void defaultParameter(int id = 2){
    cout << id << endl;
}

int main(){
    printName("aarchi" ,"modi" );   //strings always in double quotes
    printName("rhythm","modi");


    defaultParameter();
    defaultParameter(3);
    defaultParameter(4);

    return 0;
}