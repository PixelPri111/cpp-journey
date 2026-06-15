/*
Relational operators: >,>=,<,<=,==

Challenge:
A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10-20 cups get a "Silver" badge. Write a program to display the badge they'll receive based on the no of cups they buy.
*/

#include<iostream>
using namespace std;
int main()
{

 int no_of_cups;
 cout << "Enter the no of cups of tea bought: ";
 cin >> no_of_cups;

 if (no_of_cups>20)
 {
  cout << "You received a \"Gold badge\"";
 } else if (no_of_cups>=10 && no_of_cups<=20)
 {
  cout << "You received a \"Silver\" badge";
 } else
 {
  cout << "You received no badge as of now";
 }
 
 return 0;
}