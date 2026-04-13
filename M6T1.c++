/*

Gabriel Villalongo
4/13/26
*/

#include <iostream>
using namespace std;

int main()

// Set up variables
const int SIZE = 5; // changing this is the only wat to resize the array
int cars[SIZE];     // contains 5 (SIZE) integers
double sum = 0;
double average;
cout << "This program will ask you to enter a count of cars seem. " << endl;
// first loop: get data
for (int i=0; i<SIZE; i++) {
    cout << "Day" << i+1 << ": ";
    cin >> cars[i] // add that day's cars
}
// second loop: sum and average
average=sum / SIZE;
cout << "Over" << SIZE << " days, " << endl;
cout << "Total cars: " << sum << endl;
cout << "Average:    " << average << endl;
}
