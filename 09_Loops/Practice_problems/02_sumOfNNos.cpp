// Sum of N nos

#include<iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter a number: ";
 cin >> n;

 int sum = 0;
 for (int i=1; i<=n; i++) {
  sum+=i;
 }

 cout << "Sum of " << n << " numbers is: " << sum;

 return 0;
}