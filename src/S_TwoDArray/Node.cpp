#include<string>
#include"Node.h"

template <typename T>
Node<T>::Node(int r, int c, T v){
  row = r;
  col = c;
  value = v;
}

template <typename T>
Node<T>::~Node(){
}

template <typename T>
int Node<T>::getRow(){
  return row;
}

template <typename T>
int Node<T>::getCol(){
  return col;
}

template <typename T>
Node<T>* Node<T>::getRowNext(){
  return rowNext;
}

template <typename T>
Node<T>* Node<T>::getColNext(){
  return colNext;
}

template <typename T>
void Node<T>::setRowNext(Node<T>* t){
  rowNext = t;
}

template <typename T>
void Node<T>::setColNext(Node<T>* t){
  colNext = t;
}

template <typename T>
T Node<T>::getValue(){
  return value;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
