/*
CSC 134
M2Lab1 - The Crate Program
norrisa
1/28/26

Find the volume of the crate
Find cost, customer_price, and profit
Pribt everything out
*/

#include  <iostream>
#include <string>
#include <iomanip> // Needed for setprecision
#include <cstdlib> // Needed for rand()
#include <ctime>   // needed for time()

using namespace std;

int main() {
    string Name;
    double balance, deposit, withdrawal;
    int accountNumber = 12345; // Picked a static number [cite: 17]

    cout << "Enter your full name ";
    getline(cin, name); // suggested improvemnt: allows whitespace

    cout << "Enter starting balance: $";
    cin >> balance;
    cout << "Enter deposit amount: $";
    cin >> deposit;
    cout << "Enter withdrawl amount; $";
    cin >> withdrawal;

    // Calculate Final Balance 
    balance = balance + deposit - withdrawal;

    // Formatting output to 2 decimal places 
    cout << fixed << setprecision(2);
    cout << "/n--- Account Summary ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Account Number: " <, accountNumber << endl;
    cout << "Final Balance: $" << balance << endl;

    return 0;
}









}