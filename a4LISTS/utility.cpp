//
// Created by Ben on 9/30/2015.
//

#include "utility.h"
#include <iostream>
using namespace std;

node *list1() {
    double data[] = {2, 3, 2, 3, 3, 2, 3, 3};
    int size = 8;
    return build_list(data, size);
}

/**
 * Assumes that values is a list that is 0 terminated.
 */
node *build_list(node::value_type values[]) {
    int num = 0;
    while(values[num] != 0)
        num++;
    return build_list(values, num);
}

node *build_list(node::value_type values[], int number) {
    if(number == 0)
        return NULL;
    else {
        node *head = NULL;
        list_head_insert(head, values[0]);
        //cout << "initial build list: ";
        //print_list(head);
        node *tail = head;
        for(int i = 1; i < number; i++ ) {
            list_insert(tail, values[i]);
            //cout << "after insert ";
            //print_list(head);
            tail = tail->link();
        }
        return head;
    }
}

void print_list(node* head) {
    cout << "[";
    while(head != NULL) {
        cout << head->data();
        if(head->link() != NULL)
            cout << ", ";
        head = head->link();
    }
    cout << "]" << endl;
}

std::ostream & operator<<(std::ostream &str, const node* head) {
    str << "[";
    while(head != NULL) {
        str << head->data();
        if(head->link() != NULL)
            str << ", ";
        head = head->link();
    }
    str << "]";

    return str;
}

