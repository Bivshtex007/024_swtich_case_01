using namespace std;
#include <iostream>
#include <cmath>

int main() {

int day;
cout << "Enter the day of the week " << endl;
cin >> day;
switch(day){
    case 1:
        cout << "It is Sunday";
        break;
    case 2:
        cout << "It is Monday";
        break;
    case 3:
        cout << "It is Tuesday";
        break;
    case 4:
        cout << "It is Wednsday";
        break;
    case 5:
        cout << "It is Thursday";
        break;
    case 6:
        cout << "It is Friday";
        break;
    case 7:
        cout << "It is Saturday";
        break;
    default:
        cout << "Wrong Number";
        break;
    cout << endl;
}

return 0;

}