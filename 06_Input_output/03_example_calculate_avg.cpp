// Example program: Calculate average

#include<iostream>
using namespace std;

int main()
{

 int marks1;
 int marks2;

 cout << "Enter first mark: ";
 cin >> marks1;

 cout << "Enter second mark: ";
 cin >> marks2;

 double average = (double)(marks1+marks2) / 2;

 cout << "Average = " << average;
 return 0;
}