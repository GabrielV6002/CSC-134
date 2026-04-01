//M4HW
// Silver



#include <iostream>
using namespace std;

int main() {

    int i = 1; // start at 1 
    int number;
    // Have user type in the number
    cout << "Enter a number (1-12): ";
    cin >> number;
    while (i <= 12 ) { // loop until 12
        cout << number << "x" << i << " is " << number * i << "." << endl;
        i++; // Increment the counter

    }

    return 0;

}
