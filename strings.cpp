#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "enter your name :" << endl;
    cin >> s;
    // getline(cin, s);
    cout << "your name is : "<< s << endl;

    // to find the size of the string
    string s2 = "Aarchi";
    int len = s2.size();
    cout << len <<endl;

    cout << s2[4] <<endl;

    // u can also change the value of the string
    s2[len - 1] = 'k';
    cout << s2 <<endl;
    return 0;
}


// strings are enclosed in double quotes
// characters are enclosed in single quotes