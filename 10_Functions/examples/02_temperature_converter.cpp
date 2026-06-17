/*
Temperature Converter (Multi-scale)

Requirements:
- Convert between Celsius, Fahrenheit, and Kelvin
- Menu-based: user picks conversion type
- Keep converting until user exits

Functions: celsiusToFahrenheit, fahrenheitToCelsius, celsiusToKelvin, kelvinToCelsius
*/

#include<iostream>
using namespace std;

double celsiusToFahrenheit (double c) {
 return (c*9.0/5.0) + 32;
}

double fahrenheitToCelsius (double f) {
 return (f-32) * 5.0/9.0;
}

double celsiusToKelvin (double c) {
 return c + 273.15;
}

double kelvinToCelsius (double k) {
 return k - 273.15;
}

double fahrenheitToKelvin (double f) {
 return celsiusToKelvin (fahrenheitToCelsius(f)); //chain functions
}

double kelvinToFahrenheit (double k) {
 return celsiusToFahrenheit (kelvinToCelsius(k));
}

void showMenu() {
 cout << "\"TEMPERATURE CONVERTER\"" << endl;
 cout << "1. Celsius to Fahrenheit" << endl;
 cout << "2. Fahrenheit to Celsius" << endl;
 cout << "3. Celsius to Kelvin" << endl;
 cout << "4. Kelvin to Celsius" << endl;
 cout << "5. Fahrenheit to Kelvin" << endl;
 cout << "6. Kelvin to Fahrenheit" << endl;
 cout << "7. Exit" << endl;
 cout << "Choice: ";
}

int main()
{
 int choice;
 double value;

 while (true) {
  showMenu();
  cin >> choice;

  if (choice==7) {
   cout << "Goodbye!" << endl;
   break;
  }

  cout << "Enter temperature: ";
  cin >> value;

  switch (choice) {
   case 1: 
    cout << value << "°C = " << celsiusToFahrenheit(value) << "°F" << endl;
    break;

   case 2:
    cout << value << "°F = " << fahrenheitToCelsius(value) << "°C" << endl;
    break;

   case 3:
    cout << value << "°C = " << celsiusToKelvin(value) << "K" << endl;
    break;

   case 4:
    cout << value << "K = " << kelvinToCelsius(value) << "°C" << endl;
    break;

   case 5:
    cout << value << "°F = " << fahrenheitToKelvin(value) << "K" << endl;
    break;

   case 6:
    cout << value << "K = " << kelvinToFahrenheit(value) << "°F" << endl;
    break;
   
   default:
    cout << "Invalid choice!" << endl;
  }
 }

 return 0;
}