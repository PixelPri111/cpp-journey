// Defualt Parameters
// You can give a parameter a default value
// If the caller doesn't pass it, the default is used
// Rule: default parameters must be at the end of parameter list

#include<iostream>
using namespace std;

// currently defaults to "INR" if not provided
void printPrice (string item, double price, string currency = "INR") {
 cout << item << ": " << price << " " << currency << endl;
}

// late fee defaults to 50
double calculateLibraryFine (int daysLate, double feePerDay = 5.0, double maxFine = 500.0) {
 double fine = daysLate * feePerDay;
 if (fine > maxFine) fine = maxFine;
 return fine;
}

// order confimation, express defaults to false
void confirmOrder (string item, int qty, bool express = false) {
 cout << "\nOrder Confirmed!" << endl;
 cout << "Item: " << item << " x" << qty << endl;
 if (express) {
  cout << "Delivery: Express (1-2 days) - Extra Rs.99" << endl;
 } else {
  cout << "Delivery: Standard (5-7) days - Free" << endl;
 }
}

int main()
{
 // printPrice - using default currency
 printPrice ("Laptop",75000); //uses INR
 printPrice ("Phone", 999, "USD"); //overrides default

 cout << endl;

 // calculateLibraryFine - different combinations
 cout << "Fine (3 days late): Rs." << calculateLibraryFine(3) << endl;
 cout << "Fine (10 days late, Rs.10/day): Rs." << calculateLibraryFine(10,10.0) << endl;
 cout << "Fine (200 days late): Rs." << calculateLibraryFine(200) << endl; //hits max

 // confirmOrder
 confirmOrder("Shoes",2); //standard delivery
 confirmOrder("Medicine", 1, true);

 return 0;
}