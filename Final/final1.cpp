#include "final1.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int binarySearch(Course array[], int target, int first, int last){
  int mid = (first + last)/2;
  while (first <= last){
    if (arr[mid].getID()==target)
      return mid;
    else if (arr[mid].getID()<target)
      first = mid+1;
    else 
      last = mid-1;
  }
  return -1;
}

int main(){
  Course array[10];

  array[0].set
}