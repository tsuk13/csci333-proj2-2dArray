#include"TwoDArray.h"
#include<iostream>
int main(){
  TwoDArray<int>* a = new TwoDArray<int>(2,3,0);
  delete a;
  return 0;
}
