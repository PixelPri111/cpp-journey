// Pass by value bs Pass by reference

// Pass by value: function gets a copy, original is unchanged
// Call by Value: the function gets a COPY of the original variable. Any changes made inside the function affect only the copy, not the original variable.

// Pass by reference: function gets the REAL variable, changes affect original
// Call by Reference: The function gets a reference to the original variable. Any changes made inside the function directly affect the original variable

#include<iostream>
using namespace std;

// Pass by VALUE - original NOT changed
void increasebyValue(int num) {
 num = num + 10;
 cout << "\nInside function (value): " << num << endl;
}

// Pass by REFERENCE - original IS changed
void increasebyReference(int &num) {
 num = num + 10;
 cout << "\nInside function (ref): " << num << endl;
}

// Real use case: swap two variables
void swap (int &a, int &b) {
 int temp = a;
 a = b;
 b = temp;
}

// Real use case: apply discount to a price (modifies original)
void applyDiscount (double &price, double discountPercent) {
 price = price - (price * discountPercent / 100);
}

// When to use const reference: large input, don't want to modify, avoid copying
void printInvoice (const string &customerName, const double &amount) {
 cout << "\n--Invoice--" << endl;
 cout << "Customer: " << customerName << endl;
 cout << "Amount: Rs." << amount << endl;
} 

int main()
{
 // Value vs Reference
 int x=10;
 increasebyValue(x);
 cout << "After increaseByValue in main: " << x << endl; //still 10

 int y=10;
 increasebyReference(y);
 cout << "After increaseByReference in main: " << y << endl; //now 20

 // Swap
 int a=5, b=8;
 cout << "\nBefore Swap: a=" << a << ", b=" << b << endl;
 swap(a,b);
 cout << "After Swap: a=" << a <<", b=" << b << endl;

 // Discount
 double price = 1200.0;
 cout << "\nOriginal price: Rs." << price << endl;
 applyDiscount(price,15);
 cout << "After 15\% disocunt: Rs." << price << endl;

 // const reference
 printInvoice("Meera Patel",price);

 return 0;
}