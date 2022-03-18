// Name: Jade Ainsworth
// Class: CS 3305/04
// Term: Fall 2021
// Instructor: Betty Kretlow
// Assignment: Lab 3
#include "set.h"



set::set(size_type initial_capacity){
  data = new value_type[initial_capacity];
  capacity= initial_capacity;
  used=0;
}
// postcondition: empty set with initial_capacity has been created
set::~set(){
  delete [] data;
  }
// postcondition: all dynamically allocated memory has been deallocated
set::set(const set& s){
  data=new value_type [s.capacity];
  capacity = s.capacity;
  used=s.used;
  std::copy(s.data,s.data+used,data);
  }
// copy of s has been created;

set& set::operator= ( set& s){
  value_type * new_data;
  if(this == &s) //if the sets are the same
  return s;
  if (capacity != s.capacity){
    new_data= new value_type[s.capacity];
    delete[]data;
    data=new_data;
    capacity=s.capacity;
  }
  used = s.used;
  std::copy(s.data,s.data+used,data);
  return s;
}


// postcondition: exact copy of s has been assigned to the current set object
bool set::erase(const value_type& target){
  size_type index=0;
  size_type many_removed=0;
  while(index <used){
    if(data[index]==target){
     --used;
     data[index]=data[used];
     return true;
    }
    index++;
  }
  return false;
}
// postcondition: returned true if target was removed from set ow false if target was not in the set
bool set::insert(const value_type& entry){
  if(used==capacity)
    reserve(used+1);
  data[used]=entry;
  ++used;
  return true;
}
// postcondition: if entry was not in the set, then entry has been added - ow nothing was done
void set::operator+=(const set& addend){
  if(used + addend.used > capacity)
    reserve(used+addend.used);
  std::copy(addend.data,addend.data+addend.used, data+used);
  used += addend.used;
}

// postcondition: number of elements in the set has been returned
bool set::contains(const value_type& target) const{
  size_type index=0;
  while(index <used){
    if(data[index]==target){
      return true;
    }
  ++index;
  }
  return false;
}
// postcondition: returned whether target is in the set
std::ostream& operator<<(std::ostream& output, const set& s){
  int index= 0;
  while(index <s.size()){
    output<<s.data[index]<<" ";

    index++;
    }
  return output;
}
void set::reserve (size_type new_capacity){
  value_type *larger_array;
  if(new_capacity == capacity)
    return; //the allocated memory os already the right size
  if (new_capacity > used){
   // new_capacity=used; // cant allocate less than we are using

    larger_array = new value_type[new_capacity];
    for(int i = 0; i < used;i++){
      larger_array[i]=data[i];
    }
    delete[]data;
    data = larger_array;
    capacity=new_capacity;
  }
}