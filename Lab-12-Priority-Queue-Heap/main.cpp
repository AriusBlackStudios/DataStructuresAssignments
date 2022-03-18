#include <iostream>
#include "priority_queue.h"
using namespace std;
int main() {
  priority_queue<int> q1 = priority_queue<int>();
  cout<< "Is queue empty? "<< q1.empty()<<endl;
  cout<< "pushing 12,17,13,16,20 to the queue"<<endl;
    cout<< "Size of q1:  "<< q1.size()<<endl;
  q1.push(12);
  q1.push(17);
  q1.push(13);
  q1.push(16);
  q1.push(20);
  cout <<"Top priority: "<< q1.top()<<endl;
  cout<< "popping twice from the queue."<<endl;
  q1.pop();
  q1.pop();
  cout <<"Top priority: "<< q1.top()<<endl;
  cout<< "Is queue empty? "<< q1.empty()<<endl;
  cout<< "Size of q1:  "<< q1.size()<<endl;

} 