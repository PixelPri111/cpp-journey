// Type casting: means converting one data type to another

#include<iostream>
using namespace std;

int main()
{
 int teaPrice = 99;
 int quantity = 2;
 double total = teaPrice * quantity;
 cout << "Total price: " << total;

 int totalTea = 5;
 int people = 2;
 cout << totalTea/people;
 // we'll get output 2 but expected is 2.5. Type casting solves this!

 return 0;
}