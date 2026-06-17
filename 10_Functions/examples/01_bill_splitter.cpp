/*
Smart Restaurant Bill Splitter

Requirements:
- Input: total bill, number of people, tip percentage
- Calculate tip amount
- Calculate total with tip
- Split equally among people
- Show each person's share

Functions used: calculateTip, calculateTotal, splitBill, printSummary
*/

#include<iostream>
using namespace std;

double calculateTip (double billAmount, double tipPercent) {
 return billAmount * tipPercent / 100;
}

double calculateTotal (double billAmount, double tipAmount) {
 return billAmount + tipAmount;
}

double splitBill (double totalAmount, int people) {
 return totalAmount / people;
}

double printSummary (double bill, double tip, double total, int people, double perPerson) {
 cout << "\n\"---BILL SUMMARY---\"" << endl;
 cout << "Bill Amount : Rs." << bill << endl; 
 cout << "Tip         : Rs." << tip << endl; 
 cout << "Total       : Rs." << total << endl; 
 cout << "People      : Rs." << people << endl; 
 cout << "Each Person : Rs." << perPerson << endl; 
 cout << "------------------"<< endl;
}

int main()
{
 double bill, tipPercent;
 int people;

 cout << "Enter total bill amount: Rs.";
 cin >> bill;

 cout << "Enter no of people: ";
 cin >> people;

 cout << "Enter tip percentage (eg 10 for 10%): ";
 cin >> tipPercent;

 double tip = calculateTip(bill, tipPercent);
 double total = calculateTotal(bill, tip);
 double perPerson = splitBill(total, people);

 printSummary(bill, tip, total, people, perPerson);

 return 0;
}