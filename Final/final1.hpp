#ifndef FINAL1_HPP
#define FINAL1_HPP
#include <iostream>
using namespace std;

class Course{
  private:
    int courseID;
    string courseN;
    int courseC;
  public:
    Course(): courseID(0), courseN(" "), courseC(0){}
    Course(int id, string n, int c){
      courseID=id;
      courseN=n;
      courseC=c;
    }
    int getID() {return courseID;}
    string getName(){return courseN;}
    int getCredit() {return courseC;}
};

#endif