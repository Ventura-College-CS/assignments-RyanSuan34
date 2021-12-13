#ifndef POSTFIX_H
#define POSTFIX_H
#include <iostream>
#include "final3Stack.hpp"
using namespace std;

class PostFixE{
  private:
  string expression;
  int isOp(char);
  int calculate(int,int, char);
  public:
    PostFixE();
    PostFixE(string);
    void setExpress(string);
    void printExpress()const;
    int Solve;
};

#endif