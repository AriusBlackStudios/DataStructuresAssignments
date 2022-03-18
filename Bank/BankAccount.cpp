//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#include "BankAccount.h"
#include <cstdlib>//standard c++ library
#include <iostream>
using namespace std;
namespace jade_Homework_2
{
  BankAccount::BankAccount(){
    balance=0;
    owner= "UR MOM";
  }
		
   //MODIFICATION MEMBER FUNCTIONS
  void BankAccount::deposit(double amount){
    balance += amount;
  }
  void BankAccount::withdrawl(double amount){
    balance -= amount;
  }
  void BankAccount::changeowner(std::string newOwner){
    owner=newOwner;
  }
}


