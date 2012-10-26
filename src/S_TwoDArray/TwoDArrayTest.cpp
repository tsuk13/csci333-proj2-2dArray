#include"TwoDArray.h"
#include<iostream>
int main(){
  TwoDArray<int>* a = new TwoDArray<int>(2,3,0);
  a->insert(1,1,5);
  a->insert(0,0,3);
  a->insert(0,1,2);
  a->insert(0,0,2);
  std::cout << a->access(0,0) << ", " << a->access(0,1) << a->access(0,2) <<  "\n";
  std::cout << a->access(1,0) << ", " << a->access(1,1) << a->access(1,2) << "\n";
  return 0;
}
