#include <iostream>
using namespace std;

int main()
{
  const int a = 10;
  double numbers[a] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};
  double *ptr;

  ptr = numbers;

  for(int i=0; i<a; i++)
  {
    cout << *(ptr+i) << endl;
  }
}