#include<iostream>
using namespace std;
int main(){

 // int-  stores whole nos
 int teaLeaves=50;
 cout << teaLeaves << endl;

 // float- stores decimal nos
 float waterTemperature=85.588588;
 cout<<"The precision of float value of waterTemperature is: " << waterTemperature << endl;

 // double: stores decimal nos with higher precision
 double priceOfTea=299.99;
 cout << priceOfTea << endl;

 // float vs double precision
 float pi1 = 3.141592653589793238;
 double pi2 = 3.141592653589793238;
 cout << pi1 << endl;
 cout << pi2 << endl;

 // char- stores only single character in single quotes
 char teaGrade='A';
 cout << teaGrade << endl;

 // bool- stores only: true, false
 bool isTeaReady = false;
 cout << isTeaReady << endl;
 bool isTeaReady2 = 5;
 // here output=1 cuz in c++ 0 means false and anything else means true

 // modifiers
 unsigned smallTeaPack = -5; // unsigned nos can't store negatives otherwise you'll get huge positive nos
 cout << smallTeaPack << endl;

 long long largeTeaStorage = 1000000000;
 cout << largeTeaStorage << endl;

 short teaSample=25;

 // modern c++ feature: auto
 auto teaCost = 199.99;
 cout << teaCost << endl;

 return 0;
}