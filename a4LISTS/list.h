//
// Created by Ben on 9/30/2015.
//

#ifndef ASSIGN04_LINKED_LISTS_LIST_H
#define ASSIGN04_LINKED_LISTS_LIST_H


#include "node1.h"

typedef node::value_type  value_type;
typedef node *list;

/**
 * Return a list consisting of the list pointed by head_ptr without the first
 * element.
 * It is acceptable to use part or all of the argument  list provided that no
 * change is made to the list.
 *
 * precondition: the list pointed to by head_ptr is not empty.
 */
list tail(list lst);

/*
 * Return the first element of the list pointed to by head_ptr.
 *
 * precondition: the list pointed by head_ptr is not empty.
 */
value_type head(list lst);


/**
 * Return true if and only if the list 'head' is empty.
 */
bool list_is_empty(list lst);



/**
 * Return a list that consists of 'val' followed by the list pointed to by head_ptr.
 * It is acceptable to use part or all of the argument  list provided that no
 * change is made to the list.
 */
list cons(value_type val, const list lst);




/*
 * *************************************************
 *
 * Implement these using just the functions above:
 * No references to nodes
 * No references to the node toolbox.
 *
 * ************************************************
 */





/*
 *   Create a new list that starts with the elements in the list pointed
 *   to by head_ptr and ends with 'val'.
 *   Return a pointer to the head of the new list.
 */
list append(const list lst, value_type val);


/**
 *   Return a new list that consists of the two lists combined
 *   into one list.
 *   It is acceptable to use part or all of one or both argument lists provided that
 *   no change is made to them.
 */
list append(const list lst_first, const list lst_second);



/**
 * Create and return a new list that contains the elements of head_ptr that
 * are not equal to val.
 */
list remove_all_of(const list lst, value_type val);


/**
 *  Create a new list with the same values as the list pointed to by
 *  head_ptr but omitting the last element.
 *
 *  precondition:  the list pointed to by head_ptr is not empty.
 */
list remove_last(const list lst);


/**
 * Return the last value in the list pointed to by head_ptr.

 *  precondition:  the list pointed to by head_ptr is not empty.
 */
value_type  last(const list lst);


bool equals(const list list1, const list list2);



#endif //ASSIGN04_LINKED_LISTS_LIST_H
