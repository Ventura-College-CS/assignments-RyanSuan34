#include <iostream>
#include <vector>
using namespace std;

template<class T, int size = 100>
class VectorQueue
{
  private:
    vector<T> queue; 
  public:
    VectorQueue() {queue.reserve(size);}
    void enque(T el)
    {
      if(!isFull())
        queue.push_back(el);
    }
    T deque(){
      T el;
      if(!isEmpty()){
        el = queue.front();
        queue.erase(queue.begin());
      }
      else
        cout << "Queue is Empty \n";
    return el;
    }
    int isFull(){
     if(queue.size() == size)
       return 1;
     else
        return 0;
    }
    int isEmpty(){
      return queue.empty();
    }
};