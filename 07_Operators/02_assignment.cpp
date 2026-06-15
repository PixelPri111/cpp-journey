/*
Assignment operators: +=,-=,*=,/=,%=,=

Challenge: 
Write a program that allows a user to input the no of tea bags they have. Assign additional bags to them based on certain conditions (eg: if they have fewer than 10 bags, give them 5 extra). Update the original no using assignment operators.
*/

#include<iostream>
using namespace std;
int main(){

 int tea_bags;
 cout << "Enter the no of tea bags you have: ";
 cin >> tea_bags;

 if (tea_bags<10){
  tea_bags+=5;
 }

 cout << "Your total bags are: " << tea_bags;

 return 0;
}