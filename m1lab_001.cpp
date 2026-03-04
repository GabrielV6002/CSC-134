  // CSC 134
  // M1LAB1
  // name
  // date

  #include <iostream>
  #include <iomanip> // for decimal places
  using namespace std;
  
  int main() {
      // Declare my variables
      string item_name= "apples";    // use whatever you want
      int item_count = 100;           // how many we have
      double item_cost = 0.79;      // price per item
      double total_cost;             // don't know yet

      // Do the work - Welcome to them to the store.
      cout << "welcome to the " << item_name << 'store.' <<endl;
      cout << "we have " << item_count << " " << item_name << "." << endl;
      cout << "They cost  $" << item_cost << " each." << endl;
      