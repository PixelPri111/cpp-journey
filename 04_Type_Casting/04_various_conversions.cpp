#include<iostream>
using namespace std;

int main()
{
 // 1: Double/float -> int conversion
 double teaPrice = 99.99;
 float teaRating = 4.8;
 
 // implicit
 int roundPrice = teaPrice;
 cout << roundPrice << endl;
 // so decimal part is discarded not rounded
 int rating = teaRating;
 cout << rating << endl;

 // explicit
 cout << (int) teaPrice << endl;

 // 2: Character to ASCII value
 char grade = 'A';
 cout << (int) grade << endl;
 cout << (int) 'Z' << endl;
 cout << (int) 'a' << endl;

 // 3: ASCII back to character
 int asciiValue = 65;
 cout << (char) asciiValue << endl;
 cout << (char) 66 << endl;
 cout << (char) 105 << endl;
}