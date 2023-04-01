#include <iostream>
#include <string>
using namespace std;


int main() {

enum name {alex = 1, fedor, maxim, roman};

int choose;
cout << "choose one of the four names";
cin >> choose;

    switch (choose) {
        case alex:
         cout << "your name alex";
         break;

        case fedor:
            cout << "your name fedor";
            break;

        case maxim:
            cout << "your name maxim";
            break;

        case roman:
            cout << "your name roman";
            break;

        default:
            cout << "not name";
            break;
        
    }
    return 0;
}
