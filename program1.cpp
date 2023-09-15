#include<iostream>
using namespace std;

int main () {
    cout << "Enter one item from 1 to 5: ";
    int choice;
    cin >> choice;

    switch(choice) {
        case 1: cout << "Item 1 : Cheese\n"; break;
        case 2: cout << "Item 2 : Tomato\n"; break;
        case 3: cout << "Item 3 : Potato\n"; break; 
        case 4: cout << "Item 4 : Cucumber\n"; break;
        case 5: cout << "Item 5 : Burger\n"; break;
        default: cout << "Item is unavailable.\n";
    }

}