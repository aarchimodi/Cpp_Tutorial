#include <iostream>
using namespace std;

/*
if the age >= 18 and age < 55
eligible for job
age < = 18
not eligible for job
age >= 55 and age <= 57
retirement soon
age >= 60
retired
*/

 int main()
 {

    int age;
    cout <<" enter age :" <<endl;
    cin >> age;

    if (age >= 18 && age < 55 ){
        cout << "eligible for job " << endl;

    }
    else if (age <= 18){
        cout << "not eleigible for the job" <<endl;
    }

    else if (age >= 55 && age <= 57){
        cout << "retirement soon" <<endl;
    }
    else if (age >= 75){
        cout <<"retired" <<endl;
    }
    else{
        cout << "invalid";
    }
    return 0;
 }
 