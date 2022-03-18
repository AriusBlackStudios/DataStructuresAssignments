//
// Created by Ben on 10/1/2015.
//


#include "list.h"
#include "utility.h"
#include <iostream>
using namespace std;

int main() {
    double data1[] = {1,2,3,4,5,6,7,0};
    list lst = build_list(data1);
    print_list(lst);  


    cout << head(lst) << endl;

    cout << tail(lst) << endl;

    cout << list_is_empty(lst) << endl;


    list lst2 = cons(-22, lst);
    cout << lst2 << endl;
    cout << lst << endl;

    cout << list_is_empty(NULL) << endl;

    lst2 = append(lst, 238);
    cout << lst2 << endl;
    cout << lst << endl;

    list lst3 = append(lst, lst2);
    cout << lst3 << endl;
    cout << lst2 << endl;
    cout << lst << endl;

    double data4[] = {1, 9, 2, 9, 9, 3, 9, 4, 5, 6, 9, 9, 7, 8, 9, 0};
    list lst4 = build_list(data4);
    cout << lst4 << endl;
    list lst5 = remove_all_of(lst4, 9);
    cout << lst5 << endl;
    cout << lst4 << endl;

    cout << last(lst5) << endl;
    cout << lst5 << endl;

    list lst6 = remove_last(lst5);
    cout << lst6 << endl;
    cout << lst5 << endl;

    double data7[] = {1, 2, 3, 4, 5, 0};
    double data8[] = {1, 2, 3, 0};
    double data9[] = {1, 2, 3, 5, 4, 0};
    list lst7 = build_list(data7);
    list lst8 = build_list(data8);
    list lst9 = build_list(data9);
    cout << equals(lst7, lst8) << endl;
    cout << equals(lst7, lst9) << endl;
    cout << equals(lst7, lst7) << endl;
}
