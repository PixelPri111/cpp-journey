// Example3

#include<iostream>
using namespace std;

int add(int a, int b) {
 return a+b;
}

double add(double a, double b) {
 return a+b;
}

int main() {
 cout << add(5,3) << endl;
 cout << add(2.5,3.5) << endl;

 return 0;
}

// Note: changing only return type is not enough
/*
wrong eg:
int add(int a, int b) {
 return a+b;
}
double add(int a, int b) {
 return a+b;
}

// here the parameter list is identical. The compiler won't know which one to call
*/