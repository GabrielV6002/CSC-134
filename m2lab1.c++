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
#include <iomanip>
using namespace std;
int main() {
    // Part 1 -- Declare Variables 
    // Constant variables (don't change unless the market changes)
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double Charge_PER_CUBIC_FOOT =0.5;

    // crate variables
    double length, width, hieght, volume;
    // Money variables
    double cost, customer_price, profit;

    // part 2 -- Get the Input 
    cout << "Welcome to the Crate Program." << endl;
    cout << "Enter the crate dimensions."   << endl;
    

    cout << "Create Length? ";
    cin >> length;
    cout << "Create Width? ";
    cin >> width;
    cout  << "Crate Hieght? ";
    cin >> hieght;


    // Part 3 -- Do the Calculations
    volume = length * width * hieght;
    // find the cost and the customer_price
    cost = volume * COST_PER_CUBIC_FOOT;
    customer_price = volume * Charge_PER_CUBIC_FOOT;
    profit = customer_price - cost;

    // Part 4 -- Print the Output
    cout << setprecision(2) <<fixed; // 2 decimal places
    cout << " ==== CRATE INFO ====" << endl;
    cout << "Volume is " << volume << " cubic feet." << endl;
    cout << "Wholesale price is $" << cost << endl;
    cout << "Customer price is  $" << customer_price << endl;
    cout << "Profit per crate:  $" << profit << endl;
    // TODO: print out the cost, the customer price, and the profit.

    return 0;
}