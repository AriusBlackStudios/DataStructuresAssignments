#include <iostream>
#include "linkedlist.cpp"
using namespace std;
 
struct Node
{
    int data;
    Node *left, * right;
};


Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 

Node* insertLevelOrder(int arr[], Node* root,int i, int n)
{
    if (i < n)
    {
        Node* temp = newNode(arr[i]);
        root = temp;
        root->left = insertLevelOrder(arr,root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr,root->right, 2 * i + 2, n);
    }
    return root;
}
 
// Function to print tree nodes in
// InOrder fashion
void inOrder(Node* root, linkedlist &lst)
{
    if (root != NULL)
    {
        inOrder(root->left,lst);
        cout << root->data <<" ";
        lst.push(&lst.head,root-> data);
        inOrder(root->right,lst);
    }
}

void printArray(int arr[], int n){
  for(int i = 0; i < n;i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  linkedlist lst =linkedlist();
  int arr[] = { 1, 2, 3, 4, 5, 600, 64, 62, 61 };
   cout <<"Original Array: ";
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    Node* root = insertLevelOrder(arr, root, 0, n);
    cout <<"Tree: ";
    inOrder(root,lst);
    cout<<endl;
    lst.printList(lst.head);
    return 0;
}