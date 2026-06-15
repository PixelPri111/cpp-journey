/*
Nested Loops

PS: Write a program that brews multiple cups of diff types of tea. For each type of tea, brew 3 cups using a nested loop.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
 string teaTypes[5] = {"Oolong Tea", "Orange Tea", "Green Tea","Black Tea","Lemon Tea"};

 for (int i=0 ; i<5 ; i++) {
  cout << "Brewing " << teaTypes[i] << endl;

  for (int j=0 ; j<3 ; j++) {
   cout << "Brewing cup " << j+1 << " of " << teaTypes[i] << endl;
  }
 }
 return 0;
}