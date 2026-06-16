// Function Overloading
// Same function name, different parameter types or count
// C++ figs out which one to call based on the arguments you pass
// This is a form of compile-time polymorphism

#include<iostream>
using namespace std;

// EXAMPLE1: diff no of parameters
void greet() {
 cout << "Hello User!" <<endl;
}

void greet(string name) {
 cout << "Hello " << name << endl;
}

// EXAMPLE2: diff data types
void print( int x ) {
 cout << "Integer: " << x << endl;
}

void print ( double x ) {
 cout << "Double: " << x << endl;
}

// EXAMPLE3
// area of square
double area (double side) {
 return side*side;
}

// area of a rectangle (same name, different parameters) 
double area (double length, double width) {
 return length*width;
}

// area of triangle
double area (double base, double height, bool isTriangle) {
 return 0.5*base*height;
}

// EXAMPLE4: print info
void printInfo (string name) {
 cout << "Name: " << name << endl;
}

void printInfo (string name, int age) {
 cout << "Name: " << name << ", Age: " << age << endl;
}

void printInfo (string name, int age, string city) {
 cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
}

int main()
{
 greet();
 greet("Priyasha");

 print(10);
 print(10.5);

 cout << "\n\"Area Calculator\"\n";
 cout << "Square (5): " << area(5.0) << endl;
 cout << "Rectangle (4 x 6): " << area(4.0,6.0) << endl;
 cout << "Triangle (base=8, h=5): " << area(8.0, 5.0, true) << endl;

 cout << "\n\"Print Info\"\n";
 printInfo("Kunal");
 printInfo("Riya", 22);
 printInfo("Priyasha",19,"Ahmedabad");

 return 0;
}

// KEY POINT: Overloading does not work if only return type is different
// int getValue() and double getValue() = COMPILE ERROR