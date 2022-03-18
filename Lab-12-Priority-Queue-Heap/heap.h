#ifndef _HEAP_H_
#define _HEAP_H_

#include <iostream>
#include <vector>
#include <cassert>

// This class implements an unbounded max heap.

// class invariant: heap property is satisfied for a max heap

template <typename T>
class heap
{
public:
    heap();
    // postcondition: empty heap has been created
    unsigned int size() const;
    // postcondition: number of elements in a heap has been returned
    bool is_empty() const;
    // postcondtion: returned whether the heap is empty
    void insert (const T& item);
    // postcondition: item has been added
    void remove();
    // precondition: heap is not empty
    // postcondition: largest item has been removed from the heap
    T max() const;
    // precondition: heap is not empty
    // postcondition: copy of largest element in the heap has been returned
    T& max();
    // precondition: heap is not empty
    // postcondition: access to largest element in the heap has been returned
private:    
    std::vector<T> v;
    unsigned int max_child (unsigned int index) const;
    // precondition: element at index has children
    // postcondition: index of the larger child has been returned
    //                if there is only 1 child - index of that child has been returned
};

#include "heap.template"

#endif // _HEAP_H_
