/*
Traffic fine calculator

requirements:
speed:
<=60 No fine
61-80 Rs1000
81-100 Rs3000
>100 License suspension

if driver is a repeated offender: fine doubles
*/

#include<iostream>
using namespace std;

int main()
{
 int speed;
 bool repeatedOffender;

 cout << "Enter the speed of vehicle: ";
 cin >> speed;

 cout << "Are you a repeated offender (1/0)? ";
 cin >> repeatedOffender;

 if (speed<=60) {
  cout << "no fine";
 }
 else if (speed<=80) {
  int fine=1000;

  if (repeatedOffender) {
   fine*=2;

  cout << "Fine is Rs " << fine;
  }
 }
 else if (speed<=100) {
  int fine=3000;

  if(repeatedOffender) {
   fine*=2;
  }

  cout << "Fine is Rs " << fine;
 }
 else {
  cout << "Licence Suspension!";
 }

 return 0;
}