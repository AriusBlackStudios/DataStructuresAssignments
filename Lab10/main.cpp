#include "bintree.h"
#include "build_tree.h"
#include "newmethods.cpp"

#include <iostream>

using namespace std;
int main() {
    binary_tree_node<int> *s1 = sample1();
    binary_tree_node<int> *s2 = sample2();
    binary_tree_node<double> *s3 =sample3();
    binary_tree_node<double> *s4 =sample4();
    binary_tree_node<string> *s5 = sample5();
    binary_tree_node<double> *s6 =sample_bal1();
    binary_tree_node<double> *s7 =sample_bal2();
    
    print(s1,0);
    cout<<"Size of s1: "<<size(s1)<<endl;
    cout<<"Depth of s1: "<<depth(s1)<<endl;
    cout<<"Size of s1: "<<size(s1)<<endl;
    cout<<"Max of s1: "<<max(s1)<<endl;
    cout<<endl;
    
   // print(s2,0);
    cout<<"Size of s2: "<<size(s2)<<endl;
    cout<<"Depth of s2: "<<depth(s2)<<endl;
    cout<<"Max of s2: "<<max(s2)<<endl;
    cout<<endl;
    cout<<"Size of s3: "<<size(s3)<<endl;
    cout<<"Depth of s3: "<<depth(s3)<<endl;
    cout<<"Max of s3: "<<max(s3)<<endl;

    cout<<endl;
    cout<<"Size of s4: "<<size(s4)<<endl;
    cout<<"Depth of s4: "<<depth(s4)<<endl;
 //   cout<<"Max of s4: "<<max(s4)<<endl;

    cout<<endl;
    cout<<"Size of s5: "<<size(s5)<<endl;
    cout<<"Depth of s5: "<<depth(s5)<<endl;
    cout<<"Max of s5: "<<max(s5)<<endl;


    cout<<endl;
    cout<<"Size of s6: "<<size(s6)<<endl;
    cout<<"Depth of s6: "<<depth(s6)<<endl;
    cout<<"Max of s6: "<<max(s6)<<endl;
}
