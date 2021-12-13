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

  array[0].setCourseID(0);
  array[0].setCourseN("Linear Algebra");
  array[0].setCourseC(5);

  array[1].setCourseID(1);
  array[1].setCourseN("Communications");
  array[1].setCourseC(2);

  array[2].setCourseID(2);
  array[2].setCourseN("Physics: Elctr and Mag");
  array[2].setCourseC(5);

  array[3].setCourseID(3);
  array[3].setCourseN("Computer Science");
  array[3].setCourseC(4);

  array[4].setCourseID(4);
  array[4].setCourseN("English");
  array[4].setCourseC(3);

  array[5].setCourseID(5);
  array[5].setCourseN("Multi-var Calculus");
  array[5].setCourseC(5);

  array[6].setCourseID(6);
  array[6].setCourseN("Differential Equations");
  array[6].setCourseC(4);

  array[7].setCourseID(7);
  array[7].setCourseN("Linear Algebra");
  array[7].setCourseC(5);

  array[8].setCourseID(8);
  array[8].setCourseN("Linear Algebra");
  array[8].setCourseC(5);

  array[9].setCourseID(9);
  array[9].setCourseN("Linear Algebra");
  array[9].setCourseC(5);
}