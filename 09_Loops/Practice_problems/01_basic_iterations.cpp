#include <iostream>
using namespace std;

int main()
{
 // Print nos 1-100
 cout << "Printing nos from 1-100: " << endl;
 for (int i=1; i<=100; i++) {
  cout << i << endl;
 }
 cout << "\n\n";

 // Print even nos
 cout << "Printing even nos from 1 to 100: " << endl;
 for (int i=2; i<=100; i+=2) {
  cout << i << endl;
 }
 cout << "\n\n";

 // Reverse counting
 cout << "Printing in reverse from 10-1: " << endl;
 for (int i=10; i>0; i--) {
  cout << i << endl;
 }
 cout << "\n\n";

 return 0;
}