#include <iostream>
#include <vector> 
#include "midterm1.hpp"
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