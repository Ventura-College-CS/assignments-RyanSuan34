#include "final1.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int binarySearch(Course array[], int select, int first, int last){
  int mid = (first + last)/2;
  if (first <= last){
    if(array[mid].getID()==select)
      return mid;
    else if(array[mid].getID() < select)
      return binarySearch(array, select, mid+1, last);
    else
      return binarySearch(array, select, first, mid-1);
  }
  return -1;
}//changed from iterative to recursive because of unkown issues with while loop

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
  int first = 0;
  int last = n-1;
  //cout << arr[0].getName() << endl; (debugging for binarySearch issue)
  int x = binarySearch(arr, select, first, last);
  //cout << arr[0].getName() << endl; (debugging for binarySearch issue)

  if(x != -1){
    cout << "Course ID: " << arr[select].getID() << endl;
    cout << "Course Name: " << arr[select].getName() << endl;
    cout << "Credit: " << arr[select].getCredit() << endl;
  }
  else
    cout << "Course cannot be found";
}