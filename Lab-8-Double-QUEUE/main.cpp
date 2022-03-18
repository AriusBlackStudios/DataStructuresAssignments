#include <cstdlib>
#include <iostream>
#include <set>
#include <algorithm>
#include "stack_pair.h"
//Jade Ainsworth
//Data Structures
//11/10/2021
//Lab 8: Templates and stacks





int main()
{
  stack_pair<int> stack;
  std::cout<<"Testing Push Methods"<<std::endl;
  std::cout<< "pushing the numbers 5,8,17 to a: "<<std::endl;
  stack.push_a(5);
  stack.push_a(8);
  stack.push_a(17);

  std::cout<< "pushing the number 12,3,7 to b: "<<std::endl;
  stack.push_b(12);
  stack.push_b(3);
  stack.push_b(7);
  std::cout<<std::endl;


  std::cout<<std::endl;
  std::cout<<"Testing size Methods"<<std::endl;
  std::cout<<"Size of a:"<<stack.size_a()<<std::endl;
  std::cout<<"Size of b:"<<stack.size_b()<<std::endl;
  std::cout<<std::endl;


  std::cout<<std::endl;
  std::cout<<"Testing Pop Methods"<<std::endl;
  std::cout<< "poping from a: "<<std::endl;
  int A1 = stack.pop_a();
  std::cout<< "...item popped: "<<A1<<std::endl;
  std::cout<< "poping from a: "<<std::endl;
  int A2 = stack.pop_a();
  std::cout<< "...item popped: "<<A2<<std::endl;
    std::cout<< "poping from a: "<<std::endl;
  int A3 = stack.pop_a();
  std::cout<< "...item popped: "<<A3<<std::endl;

  std::cout<<std::endl;
  std::cout<< "poping from b: "<<std::endl;
  int B1 = stack.pop_b();
  std::cout<< "...item popped: "<<B1<<std::endl;
  std::cout<< "poping from b: "<<std::endl;
  int B2 = stack.pop_b();
  std::cout<< "...item popped: "<<B2<<std::endl;
    std::cout<< "poping from b: "<<std::endl;
  int B3 = stack.pop_b();
  std::cout<< "...item popped: "<<B3<<std::endl;
  std::cout<<std::endl;


  std::cout<<std::endl;
  std::cout<<"Testing size Methods"<<std::endl;
  std::cout<<"Size of a:"<<stack.size_a()<<std::endl;
  std::cout<<"Size of b:"<<stack.size_b()<<std::endl;
  
}
