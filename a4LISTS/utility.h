//
// Created by Ben on 9/30/2015.
//

#ifndef ASSIGN04_LINKED_LISTS_UTILITY_H
#define ASSIGN04_LINKED_LISTS_UTILITY_H

#include "node1.h"
#include <iostream>

node *list1();

node *build_list(node::value_type values[], int number);

node *build_list(node::value_type values[]);

void print_list(node* head);

std::ostream & operator<<(std::ostream &str, const node* head);


#endif //ASSIGN04_LINKED_LISTS_UTILITY_H
