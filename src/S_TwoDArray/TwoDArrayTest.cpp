#include"TwoDArray.h"
#include<iostream>
#include<string>
int main(){

  TwoDArray<int>* a = new TwoDArray<int>( 3, 4, 0);
  TwoDArray<double>* b = new TwoDArray<double>( 10, 12, .0);
  TwoDArray<std::string>* c = new TwoDArray<std::string>( 3, 3, "");
  delete a;
  delete b;
  delete c;



  a = new TwoDArray<int>( 3, 6, 0);
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 6; j++){
      a->insert(i,j,i+j);
    }
  }
  delete a;
/*


  a = new TwoDArray<int>( 5, 10, 0);
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->insert(i,j,i+j);
    }
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->access(i,j);
    }
  }
  delete a;



  a = new TwoDArray<int>( 5, 10, 0);
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->insert(i,j,i+j);
    }
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->remove(i,j);
    }
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->access(i,j);
    }
  }
  delete a;



   a = new TwoDArray<int>( 2, 3, 0);
  a->getNumRows();
  delete a;


  a = new TwoDArray<int>( 2, 5, 0);
  a->getNumCols();
  delete a;


  a = new TwoDArray<int>( 2, 2, 0);
  a->print();
  delete a;
*/
  return 0;
}
