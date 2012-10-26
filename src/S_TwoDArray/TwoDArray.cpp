#include<iostream>
#include"Node.h"
#include"TwoDArray.h"
#include<string>
#include<cassert>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T d){
  assert(r > 0 && c > 0);
  rows = r;
  cols = c;
  def = d;
  rowA = new Node<T>*[rows];
  colA = new Node<T>*[cols];
}

template <typename T>
TwoDArray<T>::~TwoDArray(){
  delete[] rowA;
  delete[] colA;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
  Node<T>* newNode = new Node<T>(r,c,value);
  //insert place in row
  Node<T>** cur = &(rowA[r]);
  while(*cur != 0 && (*cur)->getCol() < c){
    cur = &((*cur)->getColNext());
  }
  if((*cur) == 0|| (*cur)->getCol() != c){
    newNode->setColNext(*cur);
    *cur = newNode;
  }
  else{
    newNode->setColNext((*cur)->getColNext());
    delete (*cur);
    *cur = newNode;
  }
  //insert place in column
  cur = &(colA[c]);
  while(*cur != 0 && (*cur)->getRow() < r){
    cur = &((*cur)->getRowNext());
  }
  if((*cur) == 0|| (*cur)->getRow() != r){
    newNode->setRowNext(*cur);
    *cur = newNode;
  }
  else{
    newNode->setRowNext((*cur)->getRowNext());
    delete (*cur);
    *cur = newNode;
  }
}
/*
template <typename T>
T TwoDArray<T>::access(int r, int c){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
}

template <typename T>
void TwoDArray<T>::print(){
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      std::cout << vec[r][c];
      if(c == cols-1)
        std::cout << "\n";
      else
        std::cout << ", ";
    }
  }
}

template <typename T>
int TwoDArray<T>::getNumRows(){
  return rows;
}

template <typename T>
int TwoDArray<T>::getNumCols(){
  return cols;
}
*/
template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
