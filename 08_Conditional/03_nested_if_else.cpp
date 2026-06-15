/*
Nested If-else
PS: A tea shop offers discounts based on the no of tea cups ordered. Write a program that checks the no of cups ordered and applies a discount.
-More than 20 cups: 20% discount
-Between 10 and 20 cups: 10% discount
-Less than 10 cups: No discount
*/

#include<iostream>
using namespace std;
int main()
{
 int cups;
 float pricePerCup=2.5,totalPrice,discount, finalPrice;

 cout << "Enter the no of tea cups ordered: ";
 cin >> cups;

 totalPrice=cups*pricePerCup;

 if(cups>20){
  discount=0.2;
 } else if (cups>=10 && cups<=20){
  discount=0.1;
 } else{
  discount=0;
 }

 finalPrice=totalPrice-(totalPrice*discount);

 cout << "Hence final price to be paid after discount is: $" << finalPrice << endl;
 return 0;
}