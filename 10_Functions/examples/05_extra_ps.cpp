/*
======================================================
FUNCTIONS - PRACTICE PROBLEMS
======================================================

Solve each problem by writing one or more functions.
The goal: think "what function do I need?" before writing code.

------------------------------------------------------
PROBLEM 1: Unit Converter
------------------------------------------------------
Write functions to convert:
  - kilometers to miles (1 km = 0.621371 miles)
  - miles to kilometers
  - kilograms to pounds (1 kg = 2.20462 lbs)
  - pounds to kilograms
  - liters to gallons (1 L = 0.264172 gallons)

Make a menu where user picks which conversion to do.

------------------------------------------------------
PROBLEM 2: Number Utilities
------------------------------------------------------
Write the following functions:
  - isPrime(int n)      -> returns true if n is prime
  - isArmstrong(int n) -> returns true if n is Armstrong
                          (e.g. 153 = 1^3 + 5^3 + 3^3)
  - isPerfect(int n)   -> returns true if n is perfect
                          (sum of divisors = n, e.g. 6 = 1+2+3)
  - reverseNumber(int n) -> returns reversed number (123 -> 321)

Then: loop from 1 to 500 and print which numbers satisfy each property.

------------------------------------------------------
PROBLEM 3: Mini Calculator with History
------------------------------------------------------
Build a calculator with these functions:
  - add(a, b), subtract(a, b), multiply(a, b), divide(a, b)
  - Each operation should print the equation (e.g. "10 + 5 = 15")
  - Track number of operations done using a STATIC variable inside a function
  - At the end, show how many calculations were performed

------------------------------------------------------
PROBLEM 4: Student Report Card
------------------------------------------------------
A student has 5 subjects. Write functions to:
  - getMarks()            -> takes marks for 5 subjects from user
  - calculateAverage()    -> returns average of 5 marks
  - getGrade(average)     -> returns grade (A/B/C/D/F)
  - calculatePercentage() -> returns percentage
  - printReportCard()     -> prints full formatted report

Use PASS BY REFERENCE to fill in marks array.

------------------------------------------------------
PROBLEM 5: Recursion - Digital Root
------------------------------------------------------
Digital root: keep summing digits until single digit.
  e.g. 9875 -> 9+8+7+5 = 29 -> 2+9 = 11 -> 1+1 = 2

Write:
  - sumDigits(n)      -> sum of digits of n (recursive)
  - digitalRoot(n)    -> keeps calling sumDigits until single digit

Print digital root for: 9875, 12345, 99999, 1000

------------------------------------------------------
PROBLEM 6: Overloaded Print Function
------------------------------------------------------
Write a function called "display" that is overloaded to accept:
  - display(int n)          -> prints "Integer: n"
  - display(double d)       -> prints "Decimal: d"
  - display(string s)       -> prints "Text: s"
  - display(bool b)         -> prints "Boolean: true/false"
  - display(int a, int b)   -> prints "Pair: a, b"

Test with various data types in main().

------------------------------------------------------
PROBLEM 7 (CHALLENGE): Modular ATM System
------------------------------------------------------
Rebuild the ATM system from Loops topic using FUNCTIONS.
Each action should be its own function:
  - showMenu()
  - deposit(balance, amount)
  - withdraw(balance, amount) -> should use pass by reference
  - checkBalance(balance)
  - transferMoney(senderBalance, receiverBalance, amount)

Notice how much cleaner the code becomes compared to Loops version!

======================================================
*/
