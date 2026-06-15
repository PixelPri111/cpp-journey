// Explicit type casting: you tell the compiler what exactly to perform
// syntax: (type) variable

// Integer division problem
#include<iostream>
using namespace std;

int main()
{
 int totalTea = 5;
 int people = 2;

 double result = (double) totalTea / people;
 cout << result;
 return 0;
}