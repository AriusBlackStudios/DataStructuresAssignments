
//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#include <iostream>
#include "quadratic.h"


void Set_coefficients(jade_Homework_2::quadratic &test){
  test.a = rand() % 10;
  test.b= rand() % 10 ;
  test.c= rand() % 10;
  }

  
int main() {
  jade_Homework_2::quadratic test;

  std::cout<<"Randomizing Coefficients"<<std::endl;
  Set_coefficients(test);
  std::cout<<"Querying Coefficients"<<std::endl;
  test.Query_coefficients();
  std::cout<<std::endl;


}