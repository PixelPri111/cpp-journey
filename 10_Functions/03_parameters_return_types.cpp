// Function parameters and return types
// parameters = inputs a func needs
// return type = what the func gives back

#include<iostream>
using namespace std;

// void = returns nothing
void printDivider() {
 cout << "--------------------" << endl;
}

// int return type
int multiply (int a, int b) {
 return a*b;
}

// double return type
double calculateArea (double radius) {
 return 3.14159 * radius * radius;
}

// bool return type
bool isEven (int n) {
 return n%2==0;
}

// string return type
string getGrade (int marks) {
 if (marks>=90) return "A";
 else if (marks>=75) return "B";
 else if (marks>=60) return "C";
 else return "F";
}

int main()
{
 printDivider();

 cout << "3 x 4 = " << multiply(3,4) << endl;

 double area = calculateArea(7.5);
 cout << "Area of circle (r=7.5): " << area << endl;

 int num = 14;
 if (isEven(num)) {
  cout << num << " is even" << endl;
 } else {
  cout << num << " is odd" << endl;
 }

 int marks = 82;
 cout << "Grade for " << marks << " marks: " << getGrade(marks) << endl;

 printDivider();

 return 0;
}