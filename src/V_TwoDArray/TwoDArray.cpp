#include<iostream>
#include<vector>
#include"TwoDArray.h"
#include<string>
#include<cassert>

using std::vector;

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T d){
  assert(r > 0 && c > 0);
  rows = r;
  cols = c;
  def = d;
  vec = vector<vector<T> >(r, vector<T>(c, def));
}

template <typename T>
TwoDArray<T>::~TwoDArray(){
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
  vec[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
  return vec[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
  vec[r][c] = def;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
