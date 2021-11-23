#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LEN = 20;
const int NUM_SCORES = 3;

struct Students
{
  int sid;
  char sname[MAX_LEN];
  double scores[NUM_SCORES];
  double total_score;
};

Students *makeStudents(int);
void printStudents(Students * const, int);
void sortStudents(Students * const, int);
void editStudentValue(Students *i, Students *j);

Students *makeStudents(int N)
{
  ifstream ifs;
  Students *ptr = new Students[N];

  ifs.open("assignments/2-4/students.txt");
  if (ifs.fail())
  {
    cerr << "Error unable to open file\n";
    exit(0);
  }

  for (int i = 0; i < N; i++)
  {
    ifs >> (ptr+i) ->sid >> (ptr+i)->sname;
    for (int j = 0; j < NUM_SCORES; j++)
    {
      ifs >> (ptr+i)->scores[j];
      if (ifs.fail())
      {
        cerr << "File Read Error";
        exit(0);
      }
    }
  }
  ifs.close();
  return ptr;
}

void printStudents(Students * const ptr, int N)
{
  for (int i = 0; i < N; i++)
  {
    cout << (ptr+i)->sid << " ";
    cout << (ptr+i)->sname << " ";
    for (int j = 0; j < NUM_SCORES; j++)
        cout << (ptr+i)-> scores[j] << " ";
    cout << endl;
  }
}

void sortStudents(Students * const ptr, int N)
{
  for(int i = 0; i < N-1; i++)
  {
    for (int j = i+1; j < N ; j++)
    {   
      Students tmp1, tmp2;
      tmp1 = tmp2;
      if ((ptr+i)->total_score > (ptr+j)->total_score)
      {
        editStudentValue(ptr+i, ptr+j);
      }
    }
  }
}

void editStudentValue(Students *i, Students *j)
{
  Students temp = *i;
  *i = *j;
  *j = temp;
}

int main()
{
  const int N = 10;
  Students *ptr;

  ptr = makeStudents(N);
  printStudents(ptr, N);
  cout << "\nStudents sorted by score sum\n";
  sortStudents(ptr, N);
  printStudents(ptr, N);
  delete ptr; 
}