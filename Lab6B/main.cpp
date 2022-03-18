#include <iostream>
#include "node1.h"
#include "check_lists.h"

using namespace std;
using namespace main_savitch_5;
void list_print(node * head_ptr)
{
	node *cursor = head_ptr;
	while(cursor != NULL)
	{
		cout << cursor->data() << " ";
		cursor = cursor -> link();
	}
	cout<<endl;
}


int main()
{
	node *head_ptr = new node(12.9);
	node *cursor = head_ptr;
	node *newNode = new node(89.8);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(67.7);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(45.6);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(23.5);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	list_print(head_ptr);
	check_list1(head_ptr);

	node *head_ptr2 = new node(23.5);
	cursor = head_ptr2;
	newNode = new node(45.6);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(67.7);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(-123.5);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(89.8);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	newNode = new node(12.9);
	cursor -> set_link(newNode);
	cursor = cursor -> link();
	list_print(head_ptr2);
	check_list2(head_ptr2);
	
	node *head_ptr3;
	node *tail_ptr3;
	list_copy(head_ptr, head_ptr3, tail_ptr3);
	list_print(head_ptr3);
	check_list1(head_ptr3);
	
	list_head_remove(head_ptr2);
	list_print(head_ptr2);
	check_list2B(head_ptr2);
	
	cursor = head_ptr2;
	cursor = cursor -> link();
	list_remove(cursor);
	list_print(head_ptr2);
	check_list2C(head_ptr2);
}
