/*
While loop

PS: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the no of cups remaining. The loop should run until all cups are served.
*/

#include<iostream>
using namespace std;
int main()
{
 int teaCups;
 cout << "Enter the no of tea cups to serve: ";
 cin >> teaCups;

 while (teaCups>0) {
  teaCups--;
  cout << "Serving a cup of tea\n" << teaCups << " remaining" << endl;
 }

 cout << "All tea cups are served!";

 return 0;
}