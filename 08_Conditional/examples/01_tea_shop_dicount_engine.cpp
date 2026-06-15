/*
Requirements:
- Order above Rs1000: 20% discount
- Order above Rs500: 10% discount
- otherwise no discount
*/

#include<iostream>
using namespace std;

int main()
{
 double billAmount;

 cout << "Enter bill amount: ";
 cin >> billAmount;

 if (billAmount>1000) {
  cout << "20% discount applied";
  cout << "\nFinal Amount: " << billAmount*0.8;
 }
 else if (billAmount>500) {
  cout << "10% disount applied";
  cout << "\nFinal Amount: " << billAmount*0.9;
 }
 else {
  cout << "No discount";
  cout << "\nFinal Amount: " << billAmount;
 }

 return 0;
}