/*Create a program that prints out the electricity charge for a household 
based on the number of units consumed (units are received from the input). 
The rate is $0.12 per unit for the first 100 units and $0.15 per unit for additional units.*/

#include<iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter your charge: ";
    cin >> x;

    if (x < 100) {
        cout << "Your charge with taxes: " << x * 0.12 + x << "\n";
    } else if (x > 100) {
        cout << "Youre charge with taxes: " << x * 0.15 + x << "\n";
    }

}