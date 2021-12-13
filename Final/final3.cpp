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

int solve(int num1, int num2, char op){
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

int main(){
  const int n=20;
  const int offset=48;
  Stack<int, n> stack;
  char input;
  int num1, num2, result;
  string exression

  for(int i=0; i < expression.size();i++){
    input=expression[i];
    if(isdigit(input))
      stack.push(int(input)-offest);
    else if (isOp(input))
    {
      num1 = stack.pop();
      num2 = stack.pop();
      result = solve(num1, num2, input);
      stack.push(result);
    }
  }
  cout<<"Result: "<< stack.pop()<< endl;
  return result;
}