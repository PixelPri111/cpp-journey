/*
Logical operators: &&, ||, !

Challenge:
Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count
*/

#include<iostream>

using namespace std;
int main()
{
 bool isStudent;
 cout << "Are you a student (1 for yes 0 for No)? ";
 cin >> isStudent;

 int no_of_cups;
 cout << "Enter the no of cups purchased: ";
 cin >> no_of_cups;

 if (isStudent || no_of_cups>15)
 {
  cout << "Eligible for tea subscription discount!";
 } else
 {
  cout << "Not Eligible for the tea subscription discount!";
 }

 return 0;
}