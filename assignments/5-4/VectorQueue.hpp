#include <iostream>
#include <vector>
using namespace std;

template<class T, int size = 100>
class VectorQueue
{
  private:
    vector<T> queue; 
  public:
    VectorQueue();
    void enqueue(T data);
    T dequeue();
    bool isEmpty();
    bool isFull();
};