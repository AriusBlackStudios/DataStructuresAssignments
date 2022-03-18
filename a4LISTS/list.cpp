 //Jade Ainsworth
//3305 Fall 2021
//Kretlow
//10/24/2021

#include "list.h"
#include "utility.h"

#include <cassert>
#include <cstdlib>
#include <iostream>


typedef node::value_type  value_type;
typedef node *list;

// returns everything infront of the head
list tail(list lst){
  assert(!list_is_empty(lst));
	return lst->link();
}

//returns valie in the head
value_type head(list lst){
  assert(!list_is_empty(lst));
	return (lst->data());
}

//returns true f list is empty
bool list_is_empty(list lst){
  return (lst == NULL);
}

//creates a new list, and adds val in front
list cons(value_type val, const list lst){
  node* newList = new node(val, lst);
	return newList;
}

//implemend using only the things things above----------------
//-------------------------------------------------------------


list append(const list lst, value_type val){
  //if the list is empty, slap something in it
  if (list_is_empty(lst))
	{
    //makes a new list and sets the val to its header, uses cons to add a null list after it
		node* newList = cons(val, NULL);
		return newList;
	}
	else
	{
    //if the list has stuff in it
    node* newList; // make a new head
    node* tailNode; // make a new tail
    list_copy(lst,newList,tailNode); // use head and tail to copy the existing lst into new list
    node* tmpList = newList;//make temp listto protect the original
    while (!list_is_empty(tmpList->link()))
    {//moves pointer to the end
       tmpList = tmpList->link();
    }
    //add new value to end
    tmpList->set_link(new node(val,NULL));
    return newList;
        
	}
}

list append(const list lst_first, const list lst_second){
   if (list_is_empty(lst_first))
	{
    //return if list is empty, appending an empty list to a list, just returns original list
		return lst_second;
	}
    //return other if list is empty
    if (list_is_empty(lst_second))
	{
		return lst_first;
	}
    
	else
	{
    //same as other append, this chunck is for the first list
    node* firstList;
    node* firstTail;
    list_copy(lst_first,firstList,firstTail);
    //now its different
    //this chunck is for the second list
    node* secondList;
    node* secondTail;
    list_copy(lst_second,secondList,secondTail);

    node* tempList = secondList;
    //copy second list to protect it
    //append second list onto first
    while(!list_is_empty(tempList->link()))
    {
      firstTail->set_link(tempList);
      firstTail = firstTail->link();
      tempList = tempList->link();
    }
    return firstList;
	} 
}

list remove_all_of(const list lst, value_type val){
  node* newList; //head node
  node* tailNode;
  list_copy(lst,newList,tailNode);
  node* currentNode = newList;
  while(newList->data() == val)
    newList->set_link(newList->link());

  while (!list_is_empty(currentNode->link()))
  {
    if (currentNode->link()->data() == val)
      //skips over the value, thus deleting it
      currentNode->set_link(currentNode->link()->link());
    else
      //if the value isnt there, press forward
      currentNode = currentNode->link();
  }
  return newList;
}


list remove_last(const list lst){
   assert(!list_is_empty(lst)); 
    
    node* newList;
    node* tailNode;
    size_t currentIndex = 0;
    list_copy(lst,newList,tailNode);
    node* tmpList = newList;
    while(currentIndex < list_length(lst)-2)
    {
        currentIndex++;
        tmpList = tmpList->link();
    }
    tmpList->set_link(NULL);
    return newList;
}


value_type  last(const list lst){
  assert(!list_is_empty(lst)); 
  return list_locate(lst, list_length(lst))->data();
}


bool equals(const list list1, const list list2){
    node* temp1 = list1;
    node* temp2 = list2;
    while (!list_is_empty(temp1->link()) && !list_is_empty(temp2->link()))
    {
        if(temp1->data() == temp2->data())
        {
            temp1 = temp1->link();
            temp2 = temp2->link();
        }
        else
            return false;
    }
    if(list_is_empty(temp1->link()) && list_is_empty(temp2->link()))
        return true;
    else
        return false;
}

