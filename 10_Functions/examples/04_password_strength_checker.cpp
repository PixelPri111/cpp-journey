/*
Password Strength Checker

Requirements:
- Check if password has uppercase, lowercase, digits, special chars
- Score the password (weak/medium/strong/very strong)
- Give specific feedback on what's missing
- Each check is a separate function (good design practice)
*/

#include<iostream>
using namespace std;

bool hasUpperCase (string password) {
 for (char c : password) {
  if (c >= 'A' && c <='Z')
  return true;
 }
 return false;
}

bool hasLowerCase (string password) {
 for (char c : password) {
  if (c >= 'a' && c <= 'z')
  return true;
 }
 return false;
}

bool hasDigit (string password) {
 for (char c : password) {
  if (c >= '0' && c <= '9')
  return true;
 }
 return false;
}

bool hasSpecialChar (string password) {
 string specials = "!@#$%^&*()_+-=[]{}|;':\",./<>?";
 for (char c : password) {
  for (char s : specials) {
   if (c == s) return true;
  }
 }
 return false;
}

bool isLongEnough (string password, int minlength = 8) {
 return password.length() >= minlength;
}

int calculateScore (string password) {
 int score = 0;
 if (isLongEnough(password)) score++;
 if (password.length() >= 12) score++; //bonus for longer password
 if (hasUpperCase(password)) score++;
 if (hasLowerCase(password)) score++;
 if (hasDigit(password)) score++;
 if (hasSpecialChar(password)) score++;
 return score;
}

string getStrengthLabel (int score) {
 if (score <= 2) return "WEAK";
 else if (score <= 3) return "MEDIUM";
 else if (score <=4 ) return "STRONG";
 else return "VERY STRONG";
}

void printFeedback (string password) {
 cout << "\n---Password Analysis---" << endl;
 cout << "Length       : " << password.length() << " characters" << endl;
 cout << "Uppercase    : " << (hasUpperCase(password) ? "YES" : "NO") << endl;
 cout << "Lowercase    : " << (hasLowerCase(password) ? "YES" : "NO") << endl;
 cout << "Digit        : " << (hasDigit(password) ? "YES" : "NO") << endl;
 cout << "Special Char : " << (hasSpecialChar(password) ? "YES" : "NO") << endl;

 int score = calculateScore(password);
 cout << "Score        : " << score << "/6" << endl;
 cout << "Strength     : " << getStrengthLabel(score) << endl;

 cout << "\nTips to improve: " << endl;
 if (!isLongEnough(password))  cout << " -Use atleast 8 characters " << endl;
 if (!hasUpperCase(password))  cout << " - Add uppercase letters (A-Z)" << endl;
 if (!hasLowerCase(password))  cout << " - Add lowercase letters (a-z)" << endl;
 if (!hasDigit(password))  cout << " - Add numbers (0-9)" << endl;
 if (!hasSpecialChar(password))  cout << " - Add special characters (!@#$...)" << endl;
 if (password.length() < 12)  cout << " -Use 12+ characters for extra strength" << endl;
}

int main()
{
 string password;
 char again;

 do {
  cout << "\nEnter password to check: ";
  cin >> password;

  printFeedback(password);

  cout << "\nCheck another>(y/n): ";
  cin >> again;
 } while (again == 'y' || again == 'Y');

 cout << "Stay safe!" << endl;

 return 0;
}