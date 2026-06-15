#include<iostream>
#include<string>
using namespace std;
int main(){
 string favoriteTea = "Lemon Tea";
 string description = "known as the \"best\" tea"; 
 // escape sequences: \n, \t, \", \', \/, \? etc
 cout << favoriteTea << " is " << description <<endl;

 string userTea;
 int teaQuantity;

 cout<<"\nWhat would you like to order in tea? ";
 cin >> userTea;

 cout << "\nHow many cups of " << userTea << "would you like to have? ";
 cin >> teaQuantity;

 cout << "\nUser choice tea: " << userTea;
 cout << "\nTea Quantity: " << teaQuantity;
}