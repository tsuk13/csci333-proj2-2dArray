#include<iostream>
#include"TwoDArray.h"
using std::cout;

int main(){
  cout << "hello world\n";
  TwoDArray<int>* a = new TwoDArray<int>(2,3,0);
  a->insert(0,0,5);
  a->remove(0,0);
  cout << a->access(0,0) << ", " << a->access(1,1) << "\n";
  return 0;
}
