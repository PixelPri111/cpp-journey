#include<iostream>
using namespace std;

int main()
{
 /*
 Square pattern:
 *****
 *****
 *****
 *****
 *****
 */

 cout << "\nSquare pattern\n\n";
 for (int row=1; row<=5; row++) {
  for (int col=1; col<=6; col++) {
   cout << "*";
  }
  cout << endl;
 }

 /*
 Random pattern:
 ********
 ********
 ********
 */

 cout << "\n\nRandom pattern\n\n";
 for (int row=1; row<=3; row++) {
  for (int col=1; col<=8; col++) {
   cout << "*";
  }
  cout << "\n";
 }

 /*
 Right Triangle:
 *
 **
 ***
 ****
 *****
 */

 cout << "\n\nRight Triangle\n\n";
 for (int row=1; row<=5; row++) {
  for (int col=1; col<=row; col++) {
   cout << "*";
  }
  cout << endl;
 }

 /*
 Inverted Triangle:
 *****
 ****
 ***
 **
 *
 */

 cout << "\n\nInverted Triangle\n\n";
 for (int row=5; row>=1; row--) {
  for (int col=1; col<=row; col++) {
   cout << "*";
  }
  cout << endl;
 }

 /*
 Number Triangle:
 1
 12
 123
 1234
 12345
 */

 cout << "\n\nNumber Triangle\n\n";
 for (int row=1; row<=5; row++) {
  for (int col=1; col<=row; col++) {
   cout << col;
  }
  cout << endl;
 }

 /*
 Floyd's Triangle:
 1
 2 3
 4 5 6
 7 8 9 10
 */

 cout << "\n\nFloyd's Triangle\n\n";
 int num=1;
 for (int row=1; row<=4; row++) {
  for (int col=1; col<=row; col++) {
   cout << num << " ";
   num++;
  }
  cout << endl;
 }

 /*
 Pyramid:
     *
    ***
   *****
  *******
 *********
 */

 cout << "\n\nPyramid\n\n";
 for(int row=1;row<=5;row++)
{
 for(int space=1;space<=5-row;space++) {
  cout<<" ";
 }
 for(int star=1;star<=2*row-1;star++) {
  cout<<"*";
 }
 cout<<endl;
}

 return 0;
}