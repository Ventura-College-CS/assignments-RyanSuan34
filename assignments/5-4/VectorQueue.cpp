#include <iostream>
using namespace std;
#include "VectorQueue.hpp"

int main()
{
  VectorQueue<int, 7>q;

  q.enque(13);
  q.enque(4);
  q.enque(6);
  q.enque(2);
  q.enque(5);
  q.enque(1);
  q.enque(7);

  if(q.isFull())
    cout <<"Queue is Full \n";
  
  cout << q.deque() << endl;
  cout << q.deque() << endl;
  cout << q.deque() << endl;
  cout << q.deque() << endl;
  cout << q.deque() << endl;
  cout << q.deque() << endl;
  cout << q.deque() << endl;

  if(q.isEmpty())
    cout << "Queue is Empty \n";
}