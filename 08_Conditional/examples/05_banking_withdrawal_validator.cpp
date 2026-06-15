/*
Banking withdrawal validator

requirements:
Withdrawal succeeds only if:
-account active
-correct PIN entered
-sufficient balance
Otherwise show specific reason
*/
#include<iostream>
using namespace std;

int main()
{
 bool accountActive;
 bool correctPin;
 double balance;
 double withdrawalAmount;

 cout << "Is your acc active (1/0)? ";
 cin >> accountActive;

 cout << "Is your pin correct (1/0)? ";
 cin >> correctPin;

 cout << "Enter the acc balance: ";
 cin >> balance;

 cout << "Enter the amount to withdraw: ";
 cin >> withdrawalAmount;

 if (!accountActive) {
  cout << "Account blocked!";
 }
 else if (!correctPin) {
  cout << "Incorrect Pin";
 }
 else if (withdrawalAmount>balance) {
  cout << "Insufficient balance!";
 }
 else {
  cout << "Withdrawal successful";
  cout << "\nRemaining balance: " << balance-withdrawalAmount;
 }

 return 0;
}
