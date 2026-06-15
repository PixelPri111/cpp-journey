/*
E-commerce shipping decision

Requirements:
free shipping if:
-premium member or -order amount above 999rs
otherwise:
-50rs shipping charge
additional: 
-if order below 100rs, reject order
*/

#include<iostream>
using namespace std;

int main()
{
 double orderAmount;
 bool premiumMember;

 cout << "Enter order amount: ";
 cin >> orderAmount;

 cout << "Are you a premium member (1/0)? ";
 cin >> premiumMember;

 if (orderAmount<100) {
  cout << "Order rejected!";
 }
 else if (premiumMember || orderAmount>999) {
  cout << "Free shipping!";
 }
 else {
  cout << "Shipping charge: Rs50";
 }

 return 0;
}