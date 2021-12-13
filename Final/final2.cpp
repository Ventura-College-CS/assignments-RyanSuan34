#include "final1.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void qsort(Course [], int, int);
int partition(Course [], int, int);

void qsort(Course arr[], int first, int last){
  int pivotin;
  if (first >= last)
    return;
  pivotin = partition(arr, first, last);
  qsort(arr, first, pivotin-1);
  qsort(arr, pivotin+1, last);
}

int partition(Course arr[], int first, int last){
  int pivot = arr[last].getID();
  int i=(first-1);
  for (int j=0; j<last; j++){
    if(arr[j].getID() >= pivot)
      swap(arr[i++], arr[j]);
  }
  swap(arr[i+1],arr[last]);
  return i+1;
}

int main(){
  Course arr[10];
  int select = 0;

  arr[0].setCourseID(0);
  arr[0].setCourseN("Linear Algebra");
  arr[0].setCourseC(5);

  arr[1].setCourseID(1);
  arr[1].setCourseN("Communications");
  arr[1].setCourseC(1);

  arr[2].setCourseID(2);
  arr[2].setCourseN("Physics: Elctr and Mag");
  arr[2].setCourseC(5);

  arr[3].setCourseID(3);
  arr[3].setCourseN("Computer Science");
  arr[3].setCourseC(4);

  arr[4].setCourseID(4);
  arr[4].setCourseN("English");
  arr[4].setCourseC(3);

  arr[5].setCourseID(5);
  arr[5].setCourseN("Multi-var Calculus");
  arr[5].setCourseC(5);

  arr[6].setCourseID(6);
  arr[6].setCourseN("Differential Equations");
  arr[6].setCourseC(4);

  arr[7].setCourseID(7);
  arr[7].setCourseN("Physics: Optics and Heat");
  arr[7].setCourseC(5);

  arr[8].setCourseID(8);
  arr[8].setCourseN("ENGR: Elctronic circuits and devices");
  arr[8].setCourseC(4);

  arr[9].setCourseID(9);
  arr[9].setCourseN("Chemistry");
  arr[9].setCourseC(1);

  cout << "Enter Course ID (0-9): ";
  cin >> select;

  int n=sizeof(arr)/sizeof(arr[0]);
  qsort(arr, 0, n-1);
  for(int i=0; i<n;i++)
    cout arr[i]<<" "
}