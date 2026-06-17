// Scope and Lifetime of Variables

// Scope means where a variable can be accessed in a program
// Local variable - declared inside a function/block. Only lives there.
// GLOBAL variable - declared outside all functions. Accessible everywhere.
// STATIC local - keeps its value b/w function calls

#include<iostream>
using namespace std;

// Global variable - accessible everywhere
int totalOrders = 0;

void placeOrder (string item) {
 // Local variable - only exists inside this function
 string confirmationMsg = "Order placed for: " + item;
 totalOrders++; //modifying global
 cout << confirmationMsg << " (Order #" << totalOrders << ")" << endl;
}

// Static local variable - survives btw calls
void trackVisitor() {
 static int visitorCount = 0; //initialized only once
 visitorCount++;
 cout << "Visitor #" << visitorCount << " arrived." << endl;
}

// Scope in blocks
void demonstrateBlockScope() {
 int x = 10;
 cout << "\nOuter x: " << x << endl;

 {
  int x = 99; //diff x, only lives in this block
  cout << "Inner x: " << x << endl;
 }

 cout << "Outer x again: " << x << endl; //back to 10
}

// Global vs local: local shadows global
int score = 100; //global

void showScore() {
 int score = 42; //local - shadows the global
 cout << "Local score: " << score << endl;
 cout << "Global score: " << ::score << endl; // :: accesses global
}

int main()
{
 cout << "\"Order System\"" << endl;
 placeOrder("Laptop");
 placeOrder("Mouse");
 placeOrder("Keyboard");
 cout << "Total orders: " << totalOrders << endl;

 cout << "\n\"Static Visitor Counter\"" << endl;
 trackVisitor();
 trackVisitor();
 trackVisitor();

 cout << "\n\"Block Scope\"" << endl;
 demonstrateBlockScope();

 cout << "\n\"Global vs Local Scope\"" << endl;
 showScore();

 return 0;
}