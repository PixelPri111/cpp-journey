// Function Declaration vs Definition
// C++ reads top to bottom
// If you use a function before defining it, you need to declare it first (prototype)

// declaration means jusr telling about the existence of function but definition is the actual body

#include<iostream>
using namespace std;

// Declarations (at the top)
double calculateBMI (double weight, double height);
string getBMICategory (double bmi);
void printBMIReport (string name, double weight, double height);

int main()
{
 // Now we can call functions even though their body is below main()
 printBMIReport ("Arjun", 70, 1.75);
 printBMIReport ("Sneha", 55, 1.60);

 return 0;
}

// Definitions (below main)
double calculateBMI (double weight, double height) {
 return weight / (height * height);
}

string getBMICategory (double bmi) {
 if (bmi<18.5) return "Underweight";
 else if (bmi<25.0) return "Normal";
 else if (bmi<30.0) return "Overweight";
 else return "Obese";
}

// Function calling other function eg
void printBMIReport (string name, double weight, double height) {
 double bmi = calculateBMI (weight, height);
 string category = getBMICategory (bmi);

 cout << "\nBMI Report for " << name << endl;
 cout << "Weight: " << weight << " kg" << endl;
 cout << "Height: " << height << " m" << endl;
 cout << "BMI: " << bmi << endl;
 cout << "Category: " << category << endl;
}