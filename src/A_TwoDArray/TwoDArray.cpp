#include<iostream>
#include<string>
#include<cassert>
#include"TwoDArray.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T d){
  assert(r > 0 && c > 0);
  rows = r;
  cols = c;
  def = d;
  array = new T*[r];
  for(int i = 0; i < r; i++){
    array[i] = new T[c];
    for(int j = 0; j < c; j++){
      array[i][j] = d;
    }
  }
}

template <typename T>
TwoDArray<T>::~TwoDArray(){
  for(int i = 0; i < rows; i++){
    delete[] array[i];
  }
  delete[] array;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
  array[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
  return array[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
  assert(r >= 0 && r < rows && c >= 0 && c < cols);
  array[r][c] = def; 
}

template <typename T>
void TwoDArray<T>::print(){
std::cout << "\n";
  for(int r = 0; r < rows; r++){
    for(int c = 0; c < cols; c++){
      std::cout << array[r][c];
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

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
