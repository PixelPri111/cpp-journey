/*
Hackathon Team Eligibility

requirements:
a team is eligible if:
- team size btw 2 and 4
- atleast one female member
- avg cgpa above 7
bonus status if:
- avg cgpa above 9
*/

#include<iostream>
using namespace std;

int main()
{
 int teamSize;
 bool femaleMemberPresent;
 double avgCGPA;

 cout << "Enter the no of members in team: ";
 cin >> teamSize;

 cout << "Is any female member present in the group (1/0)? ";
 cin >> femaleMemberPresent;

 cout << "Enter the avg cgpa: ";
 cin >> avgCGPA;

 if (teamSize>=2 && teamSize<=4 && femaleMemberPresent && avgCGPA>=7) 
 {
  cout << "Eligible!";

  if (avgCGPA>=9)
  {
   cout << "\nBonus category";
  }
 }
 else
 {
  cout << "Not eligible!";
 }

 return 0;
}