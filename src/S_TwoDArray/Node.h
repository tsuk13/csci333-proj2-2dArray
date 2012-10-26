#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node{
  private:
    int row;
    int col;
    T value;
    Node<T>* rowNext;
    Node<T>* colNext;
  public:
    Node<T>(int r, int c, T v);
    ~Node<T>();
    int getRow();
    int getCol();
    Node<T>* getRowNext();
    Node<T>* getColNext();
    void setRowNext(Node<T>* t);
    void setColNext(Node<T>* t);
    T getValue();
};
#endif  
