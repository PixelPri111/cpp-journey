/*
Requirements:
Students can enter only if:
-has valid ID card
-library is open
-no pending fine above 500Rs
*/

#include<iostream>
using namespace std;

int main()
{
 bool hasIdCard;
 bool libraryOpen;
 int pendingFine;

 cout << "Has ID Card (1/0): ";
 cin >> hasIdCard;

 cout << "Library Open (1/0): ";
 cin >> libraryOpen;

 cout << "Pending Fine: ";
 cin >> pendingFine;

 if (hasIdCard && libraryOpen && pendingFine<=500)
 {
  cout << "Access Granted!";
 }
 else
 {
  cout << "Access Denied";
 }

 return 0;
}