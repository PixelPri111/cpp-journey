#include<iostream>
using namespace std;

int main()
{
 int tokenNumber = 100;
 int waitingCustomers = 5;

 cout << "Initial token no: " << tokenNumber << endl;
 cout << "Initial waiting customers: " << waitingCustomers << endl;

 // Post increment
 cout << "\nIssuing Token (post increment): " << tokenNumber++ << endl;
 cout << "Token no after issue: " << tokenNumber << endl;

 // Pre increment
 cout << "\nIssuing VIP token (pre increment): " << ++tokenNumber << endl;

 // Post decrement
 cout << "\nCustomer served (post decrement): " << waitingCustomers-- << " customers before service" << endl;

 cout << "Customers remaining: " << waitingCustomers << endl;

 // Pre decrement
 cout << "\nAnother customer leaves queue (pre decrement): " << --waitingCustomers << endl;

 cout << "\nFinal token no: " << tokenNumber << endl;

 cout << "Final waiting customers: " << waitingCustomers << endl;

 return 0;
}