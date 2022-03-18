#ifndef _PRIORITY_QUEUE_H
#define _PRIORITY_QUEUE_H

#include "heap.h"
#include <cassert>

template <typename T>
class priority_queue
{
public:
    priority_queue();
    // postcondition: empty priority_queue has been created
    void pop();
    // precondition: priority_queue is not emtpy
    // postcondition: highest priority item has been removed
    void push (const T& item);
    // postcondition: item has been inserted
    bool empty () const;
    // postcondition: returned whether priority queue is empty
    unsigned int size() const;
    // postcondition: returned number of items in the priority queue
    T top() const;
    // precondition: priority queue is not empty
    // postcondition: copy of highest priority item has been returned
private:
    heap<T> h;
};

#include "priority_queue.template"

#endif // _PRIORITY_QUEUE_H
