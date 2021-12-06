#include <iostream>
using namespace std;

int binarySearch(int array[], int f, int l, int target)
{
  int m;

  if (f>l)
    return -1;
  m = (f+l)/2;
  if (array[m]==target)
    return m;
  else if (array[m]>target)
    return binarySearch(array, f, m-1, target);
  else 
    return binarySearch(array, m+1, l, target);
}

int main()
{
  int array[] = {1,4,6,3,8,5,4,9};
  int target = 5;

  int n = sizeof(array)/sizeof(array[0]);

  int f=0,l=n-1;
  int index = binarySearch(array, f, l, target);

  if (index != -1)
    printf("Element found at index %d", index);
  else
    printf("Element not found in the array");
  cout << endl; 
  return 0;
}