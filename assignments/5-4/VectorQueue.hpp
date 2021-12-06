#ifndef _QUEUE_H
#define _QUEUE_H
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