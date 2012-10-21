#ifndef __TWODARRAY__
#define __TWODARRAY__

template <typename T>
class TwoDArray{
  private:
    T** array;
    int rows;
    int cols;
  
  public:
    //constructor with def being the default value
    TwoDArray<T>(int r, int c, T def);
    //deconstructor
    ~TwoDArray<T>();
    //replaces value at row r and col c
    void insert(int r, int c, T value);
    //returns value at row r and col c
    T access(int r, int c);
    //sets value at row r and col c to default value
    void remove(int r, int c);
    //prints array
    void print();
    //getters and setters for iteration
    int getNumRows();
    int getNumCols();
};

#endif
