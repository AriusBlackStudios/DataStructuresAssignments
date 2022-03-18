

#include <cctype>
#include <cstdlib>
#include <iostream>
#include "table1.h"
using namespace std;
using namespace main_savitch_12A;

struct test_record_type {
  int key;
  double data;
};

// PROTOTYPES for functions used by this test program:
void print_menu();
char get_answer();
test_record_type get_record();
int get_key();


int main() {
  table<test_record_type> test;
  char choice;
  bool found;
  test_record_type result;

  cout << "Empty Table Innitialized. int key, double data." <<endl;

  do {
    print_menu();
    choice = toupper(get_answer());
      if(choice == 'S')
        cout << "size:" << test.size() << endl;
      else if(choice == 'I'){
        test.insert(get_record());
        cout << "The Data has been inserted." << endl;
      }

      else if(choice == 'R'){
        test.remove(get_key());
        cout << "Removed." << endl;
      }
      else if(choice == 'K'){
        if (test.is_present(get_key()))
          cout << "Key is valid" << endl;
        else
          cout << "Key invalid." << endl;
      }
      else if(choice == 'D'){
        test.find(get_key(), found, result);
        if (found)
          cout << "Data: " << result.data << endl;
        else
          cout << "Key Invalid." << endl;
        }
      else if(choice == 'Q'){
        cout << "Ending Protocol." << endl;
      }
      else
        cout << choice << " is not a valid choice." << endl;
    
  } while ((choice != 'Q'));

  return EXIT_SUCCESS;
}


//each option tests a public function from the template class, there for testing the private helpers
void print_menu()
// Library facilities used: iostream.h
{
  cout << endl;  // Print blank line before the menu
  cout << "The following choices are available: " << endl;
  cout << " S   Size of the table" << endl;
  cout << " I   Insert a new value into the table" << endl;
  cout << " R   Remove a value from table" << endl;
  cout << " K   find a Key" << endl;
  cout << " D   find Data" << endl;
  cout << " Q   Quit" << endl;
}

char get_answer()
{
  char command;
  cout << "Enter choice: ";
  cin >> command;
  return command;
}

test_record_type get_record()
// Library facilities used: iostream.h
{
  test_record_type result;

  cout << "Enter number for Data: ";
  cin >> result.data;
  cout << result.data << " has been read." << endl;
  result.key = get_key();
  return result;
}

int get_key()
// Library facilities used: iostream.h
{
  int key;

  do {
    cout << "enter nummber for Key: ";
    cin >> key;
  } while (key < 0);
  cout << key << " has been read." << endl;
  return key;
}