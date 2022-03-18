//data structures section 4
//fall 2021
//instructor kretlow
#include "quadratic.h"
#include <cstdlib>//standard c++ library
#include <iostream>
using namespace std;
namespace jade_Homework_2
{
 quadratic::quadratic(){
    a = 0.0; //here we declare the variables and use float because we
    b = 0.0; //are dealing with square roots
    c = 0.0;
    x1 = 0.0;
    x2 = 0.0;
    x3 = 0.0;
    x4 = 0.0;
 }
    
 //MODIFICATION MEMBER FUNCTIONS
  void quadratic::Query_coefficients(){
    std::cout<<"Coefficient A:"<<a<<endl;
    std::cout<<"Coefficient B:"<<b<<endl;
    std::cout<<"Coefficient C:"<<c<<endl;

  }
  void quadratic::evaluate_at_value(double value){

  }
  void quadratic::count_real_zeros(){

  }
  void quadratic::calculate_real_zeros(){
    //are all the coefficients 0? if so both roots are 0
    if (a == 0 && b == 0 && c == 0) {
        x1 = 0;
        x2 = 0;
        cout << "The roots are:"
                "\n"
             << "x1 = " << x1 << " , "
             << "x2 = " << x2 << "\n";
    }
    //is c the only non-zero number? if so tell the user
    if (a == 0 && b == 0 && c != 0) {
        c = c;
        cout << "There are no roots"
                "\n"
             << "c = " << c << "\n";
    }

     //is a zero? if so solve the resulting linear equations and notify user
    if (a == 0 && b != 0 && c != 0) {
        cout << "The values entered do not make a quadratic expression"
                "\n"
             << "x = " << -c / b << "\n";
    }

     //if b is zero and c is zero tell user
    if (a == 0 && b != 0 && c == 0) {
        x1 = 0;
        x2 = 0;
        cout << "The roots are:"
                "\n"
             << "x1 = " << x1 << " , "
             << "x2 = " << x2 << "\n";
    }

    //if b and c are equal to zero then ax^=0 and since a cannot be zero without x being
    // zero also let user know
    if (a != 0 && b == 0 && c == 0) {
        x1 = 0;
        x2 = 0;
        cout << "The values entered result in ax^= 0; so both roots are 0"
                "\n"
             << "x1 = " << x1 << " , "
             << "x2 = " << x2 << "\n";
    }



  }
}

