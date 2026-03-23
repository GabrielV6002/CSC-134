// M5T2 - Functions Practice
// Gabriel
// 3/32/26

using namespace std;


#include <iostream>
#include "m5t2.h"
int main()
{
    // print out a table of squares
    cout << "Num/tSquare" << endl;
    int start = 1;
    int finish = 10;
    for (int num=start; num <= finish; num++) {
        int sq = square(num);
        print_table_line(num, sq);
        }

    return 0;

    }

