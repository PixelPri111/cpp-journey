/*
Loan EMI Calculator

Requirements:
- Input: principal, annual interest rate, tenure in years
- Calculate monthly EMI using standard formula
- Show total payment and total interest paid
- Compare two loan options side by side

Formula: EMI = P * r * (1+r)^n / ((1+r)^n - 1)
Where: P = principal, r = monthly rate, n = number of months
*/

#include<iostream>
#include<cmath>
using namespace std;

double calculateMonthlyRate (double annualRate) {
 return annualRate / 12 / 100;
}

double calculateEMI (double principal, double annualRate, int years) {
 double r = calculateMonthlyRate(annualRate);
 int n = years * 12;
 return principal * r * pow(1+r,n) / (pow(1+r,n)-1);
}

double calculateTotalPayment (double emi, int years) {
 return emi * years * 12;
}

double calculateTotalInterest (double totalPayment, double principal) {
 return totalPayment - principal;
}

void printLoanDetails (string bankName, double principal, double annualRate, int years) {
 double emi = calculateEMI (principal, annualRate, years);
 double total = calculateTotalPayment (emi, years);
 double interest = calculateTotalInterest (total, principal);

 cout << "\n---" << bankName << "---" << endl;
 cout << "Principal        : Rs." << principal << endl;
 cout << "Interest Rate    : " << annualRate << "% per year" << endl;
 cout << "Tenure           : " << years << " years" << endl;
 cout << "Monthly EMI      : Rs." << (int)emi << endl;
 cout << "Total Interest   : Rs." << (int)interest << endl;
}

int main()
{
 double principal;
 double rate;
 int years;

 cout << "\"EMI Calculator\"" << endl;
 cout << "Enter loan amount (principal): Rs.";
 cin >> principal;

 cout << "Enter annual interest rate (%): ";
 cin >> rate;

 cout << "Enter loan tenure (years): ";
 cin >> years;

 printLoanDetails ("Your Loan", principal, rate, years);

 // Bonus: compare with slightly lower rate
 cout << "\nComparison: What if you get 1% lower rate?" << endl;
 printLoanDetails ("Current Bank", principal, rate, years);
 printLoanDetails ("Better Rate Bank", principal, rate-1, years);

 double savings = calculateTotalPayment (calculateEMI (principal, rate, years), years);
 cout << "\nYou save Rs." << (int)savings << " with the better rate!" << endl;

 return 0;
}