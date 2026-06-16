/*
Parameters= variables listed in a function's declaration
Arguments= actual values passed to the function when it's called
*/

#include<iostream>
using namespace std;

// 'a' and 'b' are parameters
int addNumbers (int a, int b) {
 return a+b;
}

int main()
{
 int x=5, y=3;
 // 'x' and 'y' are arguments
 int result = addNumbers(x,y);
 cout << "Sum: " << result << endl;

 return 0;
}