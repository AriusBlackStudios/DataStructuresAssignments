//
// Created by Ben on 9/22/2015.
//

#include "check_lists.h"
#include <cassert>
#include <iostream>

using namespace main_savitch_5;
using namespace std;

void check_list1(node* lst) {
    double exp[] = {12.9, 89.8, 67.7, 45.6, 23.5};
    int size = 5;
    for(int i = 0; i < size; i++ ) {
        // next assert fails if lst is too short
        assert(lst != NULL);
        // next assert fails if lst does not have the correct data
        assert(lst->data() == exp[i]);
        lst = lst->link();
    }
    // next assert fails if lst is too long
    assert(lst == NULL);
    cout << "check_list1 done" << endl;
}


void check_list2(node* lst) {
    double exp[] = {23.5, 45.6, 67.7, -123.5, 89.8, 12.9};
    int size = 6;
    for(int i = 0; i < size; i++ ) {
        // next assert fails if lst is too short
        assert(lst != NULL);
        // next assert fails if lst does not have the correct data
        assert(lst->data() == exp[i]);
        lst = lst->link();
    }
    // next assert fails if lst is too long
    assert(lst == NULL);
    cout << "check_list2 done" << endl;
}


void check_list2B(node* lst) {
    double exp[] = {45.6, 67.7, -123.5, 89.8, 12.9};
    int size = 5;
    for(int i = 0; i < size; i++ ) {
        // next assert fails if lst is too short
        assert(lst != NULL);
        // next assert fails if lst does not have the correct data
        assert(lst->data() == exp[i]);
        lst = lst->link();
    }
    // next assert fails if lst is too long
    assert(lst == NULL);
    cout << "check_list2B done" << endl;
}



void check_list2C(node* lst) {
    double exp[] = {45.6, 67.7,  89.8, 12.9};
    int size = 4;
    for(int i = 0; i < size; i++ ) {
        // next assert fails if lst is too short
        assert(lst != NULL);
        // next assert fails if lst does not have the correct data
        assert(lst->data() == exp[i]);
        lst = lst->link();
    }
    // next assert fails if lst is too long
    assert(lst == NULL);
    cout << "check_list2C done" << endl;
}



