#include <iostream>
#include <vector> 
#include "midterm1.hpp"
using namespace std;

int main()
{
  Student s1(100, "John", new double[3]{10, 20, 30});
  Student s2(101, "Rane", new double[3]{10.2, 20.2, 30.2});
  Student s3(102, "Tane", new double[3]{1, 2, 3});
  Student s4(103, "Jane", new double[3]{20, 80, 90});
  Student s5(104, "Jogn-rane", new double[3]{30, 40, 320});

  Stack<Student> st;

  st.push(s1);
  st.push(s2);
  st.push(s3);
  st.push(s4);
  st.push(s5);

  cout << "Size: " << st.size() << endl;

  while (!st.isEmpty())
  {
    Student res = st.pop();
    cout << "SID: " << res.getID() << " , SName: " << res.getName() << " , scores: ";
    cout << res.getScores()[0] << ", " << res.getScores()[1] << " , " << res.getScores()[2] << endl;
  }
  return 0;
}