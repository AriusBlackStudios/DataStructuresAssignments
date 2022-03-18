#ifndef LAB8
#define LAB8
//Jade Ainsworth
//Data Structures
//11/10/2021
//Lab 8: Templates and stacks


template <class T>
class stack_pair{
  public:
    static const int CAPACITY = 30;
    stack_pair();

    T pop_a();//pops stack a
    T pop_b();//pops stack b

    void push_a(T item);
    void push_b(T item);

    size_t size_a();
    size_t size_b();

    bool is_Empty_A();
    // if a is in the leftmost index (0)
    bool is_Empty_B();
    //if b is in the right most index (capacity-1)
    bool is_Full_A() const{ return top_a>=top_b;}
    //if a has passed b, or if the spot top_a returns a value (meaning this is where stack b ends)
    bool is_Full_B() const{return top_b <= top_a;}
    //likewise, above
  private:
    size_t top_a;//points at next spot that an item pushed to a would go
    size_t top_b;//points to next spot that an item pushed to be would go
    T arr[CAPACITY];

};

#include "stack_pair.template" 
#endif