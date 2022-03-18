#include <iostream>
#include <string>


using namespace std;
int balance=0;
string temp;
string name = "Bob Ross";

int ChangeBalance(string input){
  int i = stoi(input);
  balance= i;
  return balance;
}
string ChangeName(string input){
  name=input;
  return name;
}
string ReturnName(){
  return name;
}
int ReturnBalance(){
  return balance;
}
void PrintAccountinfo(){
    cout<<"Welcome to the bank of Jade.\n The account balance is: $";
  cout << ReturnBalance();

    cout<<"\n The account Holder's name is:";
  cout << ReturnName();
}
int main() {

PrintAccountinfo();
cout<<"\n update Balace: ";
cin >> temp;
ChangeBalance(temp);

cout<<"\n update Name: ";
cin>> temp;
ChangeName(temp);
PrintAccountinfo();

}