#ifndef _SET_H_
#define _SET_H_

#include <cstdlib>
#include <iostream>

class set
{
public:
    typedef int value_type;
    typedef std::size_t size_type;
    set(size_type initial_capacity);
    // postcondition: empty set with initial_capacity has been created
    ~set();
   // postcondition: all dynamically allocated memory has been deallocated
     set(const set& s);
    // copy of s has been created;
    set& operator= ( set& s);
    // postcondition: exact copy of s has been assigned to the current set object
    bool erase(const value_type& target);
    // postcondition: returned true if target was removed from set ow false if target was not in the set
    bool insert(const value_type& entry);
     // postcondition: if entry was not in the set, then entry has been added - ow nothing was done
    void operator+=(const set& addend);
     // postcondition: non-duplicating elements from addend have been added to the set
    size_type size() const{return used;}
    // postcondition: number of elements in the set has been returned
    bool contains(const value_type& target)const;
    // postcondition: returned whether target is in the set
    friend std::ostream& operator<<(std::ostream& output, const set& s);
private:
    void reserve (size_type new_capacity);
    // precondition: size() <= new_capacity
    // postcondition: capacity is new_capacity
    value_type* data; // The array to store items
    size_type used;            // How much of array is used
    size_type capacity;
};

#endif // _SET_H_
