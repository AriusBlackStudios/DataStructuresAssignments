#include <cstdlib>
#include <iostream>
struct LNode{
  public:
    int data;
    LNode *next;
};

class linkedlist{
  public:
    LNode *head;

void push(LNode** head_ref, int new_data)
{
    LNode* new_node = new LNode();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

  void printList(LNode *ptr){
    std::cout<<"Linked list from tree: ";
    while (ptr != NULL){
        std::cout<<ptr->data<<" ";
        ptr=ptr->next; 
    }
  }
};