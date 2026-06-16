#include<iostream>
#include<string>
using namespace std;

// Defining a function above main function will not need any declaration
int checkTemperature(int temperature) {
 return temperature;
}

// declaration of function
void serveChai(int cups);

void makeChai() {
 cout << "Boiling water, adding tea leaves, straining and it's ready!\n";
}

void serveChai(string teaType = "Masala Tea") {
 cout << "Serving " << teaType << endl;
} 
// here Masala Tea is 'default parameter' which returns in output if not string is given in input to the function


int main() {
 int temp = checkTemperature(45);
 cout << "Today's temp is: " << temp << endl;
 makeChai(); // calling a function
 serveChai(3);
 serveChai("Lemon Tea"); //actual parameter passed
 serveChai();
 return 0;
}

// defining the function declared above
void serveChai(int cups) {
 cups=4; //formal parameter
 cout << "Serving " << cups << " cups of chai" << endl;
}