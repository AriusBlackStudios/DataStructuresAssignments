#include <iostream>
//Jade Ainsworth
//data Structures
//11/10/2021
//Lab 9: Recursion

void project_1(int call){
  if(call>4){
    return;
  }
  for(int i=0; i<call;i++){
    std::cout<<" ";
  }
  std::cout<<"This was written by call number " <<call<<std::endl;
  project_1(call+1);
  for(int i=call; i>0;i--){
    std::cout<<" ";
  }
  std::cout<<"This was ALSO written by call number " <<call<<std::endl;
}

double project_5(int n){
  if(n ==0)
    return n;
  else
    return (1.0f/n) + project_5(n-1);
}
int main() {
  project_1(1);
  double x = project_5(2);
  std::cout<<"result of project 5 for when n= 3: "<<project_5(3)<<std::endl;
} 