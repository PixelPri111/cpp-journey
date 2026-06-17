// Recursion
// A function that calls itself
// Every recursive function needs:
// 1.BASE CASE: when to stop (prevents infinite loop)
// 2.RECURSIVE CASE: the function calling itself with a smaller problem
#include<iostream>
using namespace std;

// Classic: Factorial
// 5! = 5 * 4 * 3 * 2 * 1
int factorial (int n) {
 if (n == 0 || n == 1) return 1; //base case
 return n * factorial (n-1); //recursive case
}

// Classic: Fibonacci
// 0, 1, 1, 2, 3, 5, 8, 13...
int fibonacci (int n) {
 if (n == 0) return 0; //base case
 if (n == 1) return 1; //base case
 return fibonacci (n-1) + fibonacci (n-2); //recursive case
}

// Sum of digits: 345 -> 3+4+5 = 12
int sumOfDigits (int n) {
 if (n==0) return 0; //base case
 return (n%10) + sumOfDigits (n/10); //last digit + rest
}

// Count down
void countDown (int n) {
 if (n==0) {
  cout << "Blast off!" << endl;
  return;
 }
 cout << n << "..." << endl;
 countDown (n-1); //recursive case
}

// Power function: base^exp
double power (double base, int exp) {
 if (exp == 0) return 1; //base case: anything^0=1
 return base * power (base, exp-1);
}

int main()
{
 cout << "---Factorial---" << endl;
 for (int i = 1; i <= 6; i++) {
  cout << i << "! = " << factorial(i) << endl;
 }

 cout << "\n---Fibonacci (first 8 nos)---" << endl;
 for (int i = 0; i < 8; i++) {
  cout << fibonacci(i) << " ";
 }
 cout << endl;

 cout << "\n---Sum of Digits---" << endl;
 cout << "sumOfDigits (345) = " << sumOfDigits(345) << endl;
 cout << "sumOfDigits (9812) = " << sumOfDigits(9812) << endl;

 cout << "\n---Count Down---" << endl;
 countDown(5);

 cout << "\n---Power---" << endl;
 cout << "2^10 = " << power(2,10) << endl;
 cout << "3^4 = " << power(3,4) << endl;

 return 0;
}