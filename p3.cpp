/*Develop a program that takes a user's birthdate and the 
current date as input and calculates their age in years, months, and days.
*/

#include<ctime>
#include<iostream>
using namespace std;

int main() {

    int birthdate;
    cout << "Enter your birthday date to get your age: ";
    cin >> birthdate;
    
    
    time_t now = time(0);
    

    cout << "Your age is: " << time - birthdate << "\n";
}