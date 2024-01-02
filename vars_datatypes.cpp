#include <iostream>
using namespace std;

int main(){

  
  // these 3 datatypes are used for integers
  int a = 5;        //int stores 4 bytes of memory
  cout << a << '\n';

  long a1 = 67568; //to store wider range of numbers
  cout << a1 <<'\n';

  long long a2 = 74868946;  //to store very very long range of numbers
  cout << a2 << '\n';



//  these 2 datatypes are used for characters and strings
// note : char datatype will store only one character we cannot store string into char

  char ch = 'a';    //char stores 1 byte of memory
  cout << ch <<'\n';

  string str = "My name is aarchi";
  cout << str <<endl;




  bool b = true;     //bool stores 1 byte of memory
  cout << b << '\n';

  float f = 1.2;     //float stores 4 bytes of memory
  cout << f << '\n';

  double d = 1.23;   //double stores 8 bytes of memory
  cout << d <<'\n' ;

  int size = sizeof(a);  //sizeof operator 
  cout << size <<'\n';


  // to store both positive/negative values we use signed
  signed int a4 = -5;    //signed/unsigned stores 8 bytes of memeory
  cout << a4 <<'\n';
  
  return 0;
}