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
    double getSum()// Acquires the sum for the StudentCompare class
    {
      double sum = 0;
      for(int i =0; i < numScores; i++)
      {
        sum += scores[i];
      }
      return sum;
    }
    void display()//Cleaner diplay of data
    {
      cout << "ID: " << getID() << " " << "Name: " << getName() << " " << "Scores: ";
      for (int i = 0; i < numScores; i++)
      {
        cout << scores[i] << " ";
      }
      cout << "Score Sum: " << getSum(); 
    }
};

class StudentCompare
{
  public:
    bool operator()(Student s1, Student s2)
    {
      return s1.getSum()<s2.getSum();
    }
}