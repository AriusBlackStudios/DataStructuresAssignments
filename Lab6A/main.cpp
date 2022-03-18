#include "bag3.h"
#include <iostream>

using namespace std;
using namespace main_savitch_5;

int main() {
    int size = 5;
    // how many of each value to put in each bag
    // one 0 will be put in b1
    // two 1's will be put in b1
    // five 0's will be in b2 ...
    int num1[] = {1, 2, 3, 4, 5};
    int num2[] = {5, 4, 3, 2, 1};
    bag b1;
    bag b2;
    // insert data into bags
    for(int i = 0; i < size; i++ ) {
        for(int j = 0; j < num1[i]; j++) {
            b1.insert(i);
        }
        for(int j = 0; j < num2[i]; j++ ) {
            b2.insert(i);
        }
    }
    for(int i = 0; i < size; i++ ) {
        if(num1[i] != b1.count(i)) {
            cout <<  "value  " << i << " has bad count in b1: "
                << b1.count(i) << " rather than " << num1[i] << endl;
        }
        if(num2[i] != b2.count(i)) {
            cout <<  "value  " << i << " has bad count in b2: "
            << b2.count(i) << " rather than " << num2[i] << endl;
        }
    }
    bag b3 = b1 - b2;
    for(int i = 0; i < size; i++ ) {
        int d = num1[i] - num2[i];
        d = (d >= 0) ? d : 0;
        if(b3.count(i) != d) {
            cout <<  "value  " << i << " has bad count in b3: "
            << b3.count(i) << " rather than " << d << endl;
        }
    }

    b1 -= b1;
    for(int i = 0; i < size; i++ ) {
        if(0 != b1.count(i)) {
            cout <<  "value  " << i << " has bad count in b1: "
            << b1.count(i) << " rather than " << 0 << endl;
        }
    }


    cout << "no news is good news!" << endl;
}

