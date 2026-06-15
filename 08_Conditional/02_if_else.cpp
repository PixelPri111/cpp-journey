/*
If-Else Statement
PS: Write a program that checks if a tea shop is open. If the current hour(input by the user) is btw 8am and 6pm, the shop is open; otherwise, it is closed.
*/

#include<iostream>
using namespace std;
int main()
{
 int hour;
 cout << "Enter the current hour (0-23): ";
 cin >> hour;

 if (hour>=8 && hour<=18) {
  cout << "The tea shop is open!";
 } else {
  cout << "The tea shop is closed!";
 }
 return 0;
}