#include <iostream>
using namespace std;
#include "VectorQueue.hpp"

template<class T, int size>
VectorQueue<T,size>::VectorQueue(){
  this.size=size;
  queue.resize(size);
}

template<class T, int size>
void VectorQueue<T,size>::enqueue(T data) 
{
  if(isFull()) 
  {
    cout << "Queue is full" << endl;
    return;
  }
  queue.push_back(data);
}

template<class T, int size>
T VectorQueue<T,size>::dequeue() 
{
  if(isEmpty()) 
    cout << "Queue is Empty" << endl;
  T topData = queue.front();
  queue.pop_front();
  return topData;
}

template<class T, int size>
bool VectorQueue<T,size>::isEmpty() 
{
  return queue.size() == 0;
}

template<class T, int size>
bool VectorQueue<T,size>::isFull() 
{
  return queue.size() == size;
}