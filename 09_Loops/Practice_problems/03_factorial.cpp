// Factorial

#include<iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter an integer no: ";
 cin >> n;

 long long fact = 1;
 for (int i=1; i<=n; i++) {
  fact*=i;
 }

 cout << "Factorial of " << n << " = " << fact; 

 return 0;
}