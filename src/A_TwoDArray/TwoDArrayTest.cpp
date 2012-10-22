#include<iostream>
#include"TwoDArray.h"

int main(){
  TwoDArray<int>* a = new TwoDArray<int>( 3, 4, 0);
  a->insert(0,1,1);
  a->print();
  a->remove(0,1);
  a->print();
  delete a;
  return 0;
}
