//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow

#include <cstdlib>
#include <iostream>
namespace jade_Homework_2
{
class BankAccount{
    public:

        //CONSTRUCTORS
        BankAccount();
		
        //MODIFICATION MEMBER FUNCTIONS
        void deposit(double amount);
        void withdrawl(double amount);
        void changeowner(std::string newOwner);

        //CONSTANT MEMBER FUNCTIONS
        std::string get_Owner() const {return owner;}
        double get_balance() const {return balance;}
        
    private:
        double balance;
        std::string owner;
};



}