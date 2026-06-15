/*
Switch Case
PS: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:
-Green Tea:$2
-Black Tea:$3
-Oolong Tea:$4
*/

#include<iostream>
using namespace std;
int main()
{
 int choice;
 double price;

 cout << "Select your tea preference:\n";
 cout << "1.Green Tea\n";
 cout << "2.Black Tea\n";
 cout << "3.Oolong Tea\n";

 cout << "Enter your choice in no: ";
 cin >> choice;

 switch(choice){ //keep the thing to be evaluated inside parenthesis
  case 1:
   price=2.0;
   cout << "You selected Green Tea. Price: $" << price << endl;
   break;
  case 2:
   price=3.0;
   cout << "You selected Black Tea. Price: $" << price << endl;
   break;
  case 3:
   price=4.0;
   cout << "You selected Oolong Tea. Price: $" << price << endl;
   break;
  default:
   cout << "Invalid Choice" << endl;
   break;
 }
 return 0;
}