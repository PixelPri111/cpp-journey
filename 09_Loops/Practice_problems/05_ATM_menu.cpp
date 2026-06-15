// ATM Menu
// show the menu repeatedly: deposit, withdraw, check balance and exit

#include<iostream>
using namespace std;

int main()
{
 double balance = 100000;
 int choice;

 while (true)
 {
  cout << "\n1. Deposit";
  cout << "\n2. Withdraw";
  cout << "\n3. Check Balance";
  cout << "\n4. Exit\n\n";

  cout << "Enter choice: ";
  cin >> choice;

  cout << "\n";
  if (choice==1) {
   double amount;
   cout << "Enter amount to deposit: ";
   cin >> amount;
   balance+=amount;
   cout << amount << "Rs deposited." << "\nUpdated balance: " << balance << endl;
  }
  else if (choice==2) {
   double amount;
   cout << "Enter amount to withdraw: ";
   cin >> amount;
   
   if (amount<=balance) {
    balance-=amount;
    cout << amount << "Rs withdrawn" <<"\nUpdated balance: " << balance << endl;
   } else {
    cout << "Insufficient balance!" << endl;
   }
  }
  else if (choice==3) {
   cout << "The current balance: " << balance << endl;
  }
  else if (choice==4) {
   cout << "Thank you!";
   break;
  }
 }

 return 0;
}