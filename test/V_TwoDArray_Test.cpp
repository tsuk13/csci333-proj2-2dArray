#include"gtest/gtest.h"
#include"../src/V_TwoDArray/TwoDArray.h"
#include <string>

TEST(TwoDArray_Test, Constructor_Deconstructor){
  TwoDArray<int>* a = new TwoDArray<int>( 3, 4, 0);
  TwoDArray<double>* b = new TwoDArray<double>( 10, 12, .0);
  TwoDArray<std::string>* c = new TwoDArray<std::string>( 3, 3, "");
  delete a;
  delete b;
  delete c;
}

TEST(TwoDArray_Test, insert){
  TwoDArray<int>* a = new TwoDArray<int>( 3, 6, 0);
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 6; j++){
      a->insert(i,j,i+j);
    }
  }
  delete a;
}

TEST(TwoDArray_Test, access){
  TwoDArray<int>* a = new TwoDArray<int>( 5, 10, 0);
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      a->insert(i,j,i+j);
    }
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
      EXPECT_EQ(i+j, a->access(i,j));
    }
  }
  delete a;
}

TEST(TwoDArray_Test, remove){
  TwoDArray<int>* a = new TwoDArray<int>( 5, 10, 0);
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
      EXPECT_EQ(0, a->access(i,j));
    }
  }
  delete a;
}

TEST(TwoDArray_Test, getNumRows){
  TwoDArray<int>* a = new TwoDArray<int>( 2, 3, 0);
  EXPECT_EQ(2, a->getNumRows());
  TwoDArray<int>* b = new TwoDArray<int>( 5, 3, 0);
  EXPECT_EQ(5, b->getNumRows());
  TwoDArray<int>* c = new TwoDArray<int>( 10, 3, 0);
  EXPECT_EQ(10, c->getNumRows());
  delete a;
  delete b;
  delete c;
}

TEST(TwoDArray_Test, getNumCols){
  TwoDArray<int>* a = new TwoDArray<int>( 2, 5, 0);
  EXPECT_EQ(5, a->getNumCols());
  TwoDArray<int>* b = new TwoDArray<int>( 5, 12, 0);
  EXPECT_EQ(12, b->getNumCols());
  TwoDArray<int>* c = new TwoDArray<int>( 10, 15, 0);
  EXPECT_EQ(15, c->getNumCols());
  delete a;
  delete b;
  delete c;
}

TEST(TwoDArray_Test, print){
  TwoDArray<int>* a = new TwoDArray<int>( 2, 2, 0);
  TwoDArray<int>* b = new TwoDArray<int>( 1, 3, 0);
  b->insert(0,0,1);
  b->insert(0,1,2);
  b->insert(0,2,3);
  a->print();
  b->print();
  delete a;
  delete b;
}
