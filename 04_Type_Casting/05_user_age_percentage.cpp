#include<iostream>
using namespace std;

int main()
{
 int marks = 85;
 int totalMarks = 100;

 // without casting
 cout << marks / totalMarks * 100 << endl;
 // output=0 since int/int div gives 0

 // with casting
 double percentage = (double) marks / totalMarks * 100;
 cout << percentage;

 return 0;
}