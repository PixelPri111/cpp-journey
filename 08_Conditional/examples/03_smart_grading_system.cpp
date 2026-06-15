/*
Smart Grading System

Requirements:
90+ -> A
80+ -> B
70+ -> C
60+ -> D
Below -> Fail

Additional condition: if attendence<75%, max grade allowed=C
*/

#include<iostream>
using namespace std;

int main()
{
 int marks;
 int attendance;

 cout << "Enter total marks: ";
 cin >> marks;
 cout << "Enter attendance: ";
 cin >> attendance;

 if (attendance<75)
 {
  if (marks>=70) {
   cout << "C grade";
  }
  else if (marks>=60) {
   cout << "D grade";
  }
  else {
   cout << "Fail";
  }
 }
 else
 {
  if (marks>=90) {
   cout << "A grade";
  }
  else if (marks>=80) {
   cout << "B grade";
  }
  else if (marks>=70) {
   cout << "C grade";
  }
  else if (marks>=60) {
   cout << "D grade";
  }
  else {
   cout << "Fail";
  }
 }

 return 0;
}