#include <iostream>
#include "final3postFix.hpp"
using namespace std;

int isOp(char);
int solve(int, int, char);

int isOp(char op){
  switch (op){
    case '+':
    case '-':
    case '*':
    case '/':
      return 1;
    default:
      return 0;
  }
}

int solve(int num1, num2, char op){
  int result;
  switch (op){
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1/num2;
      break;
    default:
      cout << "Error: Undefined operator error" << endl;
      exit(0);
  }
  return result;
}