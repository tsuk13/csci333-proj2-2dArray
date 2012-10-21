#include<iostream>
#include"TwoDArray.h"

int main(){
  TwoDArray<int>* a = new TwoDArray<int>( 1, 1, 0);
  a->print();
  delete a;
  return 0;
}
