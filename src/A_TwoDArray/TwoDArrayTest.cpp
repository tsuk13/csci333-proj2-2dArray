#include<iostream>
#include"TwoDArray.h"

int main(){
  TwoDArray<int>* a = new TwoDArray<int>( 1, 2, 0);
  a->insert(0,1,1);
  a->print();
  a->remove(0,1);
  std::cout << a->access(0,0) << ", " << a->access(0,1) << "\n";
  delete a;
  return 0;
}
