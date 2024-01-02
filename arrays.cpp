#include <iostream>
using namespace std;

int main(){

    // initialize array
    int arr[5] = {1, 2, 3, 4, 5};
    
    

    // u can also chnage the value of the array
    // 57 will be replaced in place of 4
    arr[3] = 57;
    cout << arr[3] <<endl;;
    

    // u can also do operations on array
    // 6 will return
    arr[2] += 3;
    cout << arr[3] <<endl;

   // Accessing and printing elements of the array 
   cout << arr[0] << arr[1] <<arr[2] <<arr[3] <<arr[4] <<endl;

    return 0;

}



/*
 Initialize Array with Values  :
 int arr[5] = {1, 2, 3, 4, 5};

 Initialize Array with Values and without Size  :
 int arr[] = {1, 2, 3, 4, 5};


 Initialize an array partially  :
 int arr[5] = {1, 2};



*/