#include <iostream>
#include <vector>
using namespace std;

class Student
{
  private:
    int SID;
    string SName;
    double *scores;
  public: 
    Student()
    {
      SID=0;
      SName="";
      scores=nullptr;
    }
    Student(int i, string name, double *sc)
    {
      SID=i;
      SName=name;
      scores=sc;
    }
    int getID()
    {
      return SID;
    }
    string getName()
    {
      return SName;
    }
    double *getScores()
    {
      return scores;
    }
};

template<class T>
class Stack
{
  private:
    vector<T>pool;
  
  public:
    Stack(){}//Default Constructor
    void push(const T &el)//pushes element into the pool
    {
      pool.push_back(el);
    }
    T pop()//Removes and returns the top of the element from the pool
    {
      T res = pool[pool.size()-1];
      pool.pop_back();
      return res;
    }
    T topEl()//Returns the top of the pool
    {
        return pool[pool.size() - 1];
    }
    bool isEmpty()
    {
      return pool.size()==0;
    }
    int size() 
    {
      return pool.size();
    }
};