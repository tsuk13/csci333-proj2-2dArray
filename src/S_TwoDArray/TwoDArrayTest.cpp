#include"TwoDArray.h"
#include<iostream>
int main(){
  TwoDArray<int>* a = new TwoDArray<int>(2,3,0);
  a->insert(1,1,5);
  a->insert(0,0,3);
  a->insert(0,1,2);
  a->insert(0,0,2);
  a->remove(1,1);
  a->remove(0,0);
  a->print();
  return 0;
}
