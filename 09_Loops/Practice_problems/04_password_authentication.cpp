// Password Authentication
// user gets 3 attempts to enter correct password ,i.e, p1234. If entered, access granted, otherwise acc locked after 3 failed attempts

#include<iostream>
#include<string>
using namespace std;

int main()
{
 string password;
 string correctPassword = "p1234";

 for (int attempts=1; attempts<=3; attempts++) {
  cout << "Enter password: ";
  cin >> password;

  if (password == correctPassword) {
   cout << "Access Granted.";
   return 0;
  }
  else {
   cout << "Incorrect password.\n\n";
  }
 }

 cout << "Account locked!";

 return 0;
}