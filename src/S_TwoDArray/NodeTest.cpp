#include<iostream>
#include"Node.h"

int main(){
  Node<int>* n = new Node<int>(2,3, 5);
  std::cout << n->getValue();
  return 0;
}
