#include <iostream>
using namespace std; 


/*take day no and print corresponding day
for 1 print 'Monday'
for 2 print 'Tuesday' and so on
*/
int main(){

    int day;
    cout << "enter number to know the corresponding day :\n" ;
    cin >> day;

    switch(day){
        // we can also use case 'a' for characters
        case 1:
            cout << "Monday \n";
        break;

        case 2:
            cout <<"Tuesday \n";
        break;

        case 3:
            cout <<"Wednesday \n";
        break;

        case 4:
            cout <<"Thursday \n";
        break;

        case 5:
            cout <<"Friday \n";
        break;

        case 6:
            cout <<"Saturday \n";
        break;

        case 7:
            cout <<"Sunday \n";
        break;

        default :
            cout <<"Invalid";
    
            // even this cout will not be printed
            cout <<"check inside switch";
    }

    return 0;
}