#include "bintree.h"
#include <string>

template <class T>
double depth(binary_tree_node<T> *root){
    if (root != NULL)
    {
        return 1+ depth(root->left( ));
    }
    else{
      return -1;
    }
}


template <class T>
int size(binary_tree_node<T> *root){
  
   if (root != NULL)
    {
      return 1+ size(root->left( )) +size(root->right( )) ;
    }
    else{
      return 0;
    }
}

template <class T>
T max(binary_tree_node<T> *root){
  if (root->is_leaf() == true)
  {
    return root->data();
  }
  return max(root->right());
}


/*int size_d(binary_tree_node<double> *root){
  
   if (root != NULL)
    {
        return 1+ size_d(root->left( )) +size_d(root->right( )) ;
    }
    else{
      return 0;
    }
}*/

template <class T>
double tree_sum(binary_tree_node<double> *root){ 
   if (root != NULL)
    {
        //return root->data() + tree_sum(root->left( )) +tree_sum(root->right( )) ;
    }
    else{
      return 0;
    }
}




/*double tree_average(binary_tree_node<double> *root){
    double sum = tree_sum(root);
  //  double s = size_d(root);
   // return sum/s;
}*/
