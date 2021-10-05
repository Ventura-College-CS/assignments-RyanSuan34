#include <iostream>
using namespace std;

void printArray(double * const n, int N);

int main()
{
    const int N = 10;
    double arr[N] = {5.3,10.5,15.23,20.2,25.3,30.6,35.2,40.7,45.8,50.3};
    printArray(arr, N);
}

void printArray(double * const  n, int N)
{
    double *ptr;
    	ptr = n; 
    
    for(int i=0; i < N; i++)
    {
        cout << *(ptr+i) << "\t"; 
    }
    cout << endl;
}