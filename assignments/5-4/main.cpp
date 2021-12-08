#include "VectorQueue.hpp"
#include <iostream>

using namespace std;

int main() {

  VectorQueue<int,10> q;

  for(int i = 0; i < 10; i++) 
    q.enqueue(rand() % 10);
  for(int i = 0; i < 3; i++) 
    q.dequeue();
  return 0;
}