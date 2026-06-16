// A function is a named block of code that does one specific job
// Instead of writing the same logic again and again, you wrap it in a function and call it

/*
Structure/syntax:
returnType functionName (parameters) {
 //body
 return value;
}
*/

#include<iostream>
using namespace std;

// This function takes no input and returns nothing
void greetUser() {
 cout << "Hello! Welcome to the system." << endl;
}

// This function takes a name and returns nothing (just prints)
void greetByName (string name) {
 cout << "Hello, " << name << "!" << endl;
}

// This function takes 2 nos and returns their sum
int add (int a, int b) {
 return a+b;
}

int main()
{
 // Calling Functions
 greetUser();

 greetByName("Raj");
 greetByName("Priya"); //reusing same function, different input

 int result = add(10,25);
 cout << "Sum: " << result << endl;
 cout << "Direct call: " << add(5,7) << endl;

 return 0;
}