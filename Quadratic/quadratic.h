//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
 
#include <cstdlib>
#include <iostream>
namespace jade_Homework_2
{
class quadratic{
   public:
 
       //CONSTRUCTORS
       quadratic();
    
       //MODIFICATION MEMBER FUNCTIONS
       void Query_coefficients();
       void evaluate_at_value(double value);
       void count_real_zeros();
       void calculate_real_zeros();
      float a; //here we declare the variables and use float because we
      float b; //are dealing with square roots
      float c;
      float x1;
      float x2;
      float x3;
      float x4;
    
};
}
