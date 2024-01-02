#include <iostream>
using namespace std;


/*school has following grading system
80 to 100 - A
60 to 80 - B 
40 to 60 - C 
20 to 40 - D 
below 20 - E
*/

int main(){

    int marks;
    cout << "enter marks :" ;
    cin >> marks;


    // here we need to satisfy 2 conditions
    if (marks >= 80 && marks <= 100){
        cout << "A Grade" << endl;
    }
    else if (marks >= 60 && marks <= 80){
        cout << "B grade" <<endl;
    }
    else if (marks >= 60 && marks <=40){
        cout << " C grade" <<endl;
    }
    else if(marks >= 40 && marks<=20){
        cout <<"D grade" <<endl;
    }
    else if(marks <= 20){
        cout <<"fail"<<endl;
    }
    return 0;
}
