#include<iostream>
#include<string>
#include"TwoDArray.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def){
  rows = r;
  cols = c;
  array = new T*[r];
  for(int i = 0; i < r; i++){
    array[i] = new T[c];
    for(int j = 0; j < c; j++){
      array[i][j] = def;
    }
  }
}

template <typename T>
TwoDArray<T>::~TwoDArray(){
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
  return array[0][0];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
}

template <typename T>
void TwoDArray<T>::print(){
  std::cout << "tryind to print\n";
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
