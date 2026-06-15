/*
If Statement
PS: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea", the program should confirm their order
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
 string teaOrder;
 cout << "Enter your tea order: ";
 // cin >> teaOrder; it wont work here as there is a space in the string input
 getline(cin,teaOrder);

 if (teaOrder=="Green Tea"){
  cout << "Order Confirmed!" << endl;
 }
 return 0;
}