/*
Arithmetic operators: +,-,*,/,%

Challenge:
Create a program that calculates total price of tea cup. The user inputs the no of cups they want and price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount and show the final price.
*/

#include<iostream>
using namespace std;
int main()
{
 int no_of_cups;
 float price_per_cup, total_price, discounted_price;
 cout << "Enter the no of cups you want: ";
 cin >> no_of_cups;
 cout << "Enter the price per cup: ";
 cin >> price_per_cup;

 total_price = no_of_cups*price_per_cup;

 // Apply 5% discount if total price is above 100 for instance
 if (total_price>100){
  discounted_price = total_price - (0.05*total_price);
  cout << "Discounted price is: " << discounted_price << endl;
 } else 
 {
  cout << "Total price is: " << total_price << endl;
 }

 return 0;
}