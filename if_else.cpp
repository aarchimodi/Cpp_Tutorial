#include <bits/stdc++.h>
using namespace std;

int main(){

    int age;
    cout << "enter age :" <<endl;
    cin >> age;

    if (age >= 18){
        cout << "adult" <<endl;
    }
    else if(age < 18){
        cout << "not an adult" << endl;
    }
    else{
        cout << "invalid" <<endl;
    }
    return 0;

}


// if will still work if u dont put else condition
// else is not mandatory