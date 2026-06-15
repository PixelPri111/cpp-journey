#include<iostream>
#include<string>

using namespace std;

int main()
{
 string teaName;
 int quantity;
 string review;

 cout << "Enter tea name: ";
 getline(cin,teaName);

 cout << "Enter quantity: ";
 cin >> quantity;

 cout << "Order " << quantity << " cups of " << teaName << endl;

 cout << "Write your review: ";
 getline(cin,review);
 
 cout << "Review received: " << review;

 return 0;
}