//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#include "BankAccount.h"
#include <iostream>

void Print_Account(jade_Homework_2::BankAccount account){
  std::cout<<std::endl;
  std::cout<<"Current Account Holder: " << account.get_Owner()<<std::endl;
  std::cout<<"Current Balance: " << account.get_balance()<<std::endl;
  std::cout<<std::endl;

}
int main() {
  jade_Homework_2::BankAccount account;
  Print_Account(account);
  double deposit;
  for (int i =0; i<5;i++){
    deposit = 1+ (rand() % 100 );
    std::cout<<"Depositing $"<<deposit<<""<<std::endl;
  account.deposit(deposit);
  std::cout<<"New Balance: " << account.get_balance()<<std::endl;
  }
  std::cout<<std::endl;
  std::cout<<std::endl;
  for (int i =0; i<5;i++){
    deposit = 1+ (rand() % 50 );
    std::cout<<"widthdrawing $"<<deposit<<""<<std::endl;
  account.withdrawl(deposit);
  std::cout<<"New Balance: " << account.get_balance()<<std::endl;
  }
  std::cout<<std::endl;
   std::cout<<"Changing Name to Allmight"<<std::endl;
   account.changeowner("Allmight");
  Print_Account(account);
}