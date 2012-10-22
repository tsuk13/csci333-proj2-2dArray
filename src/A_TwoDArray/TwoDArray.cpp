#include<iostream>
#include<string>
#include"TwoDArray.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T d){
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
  array[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
  return array[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
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
