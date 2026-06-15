#include<iostream>
#include<string>
using namespace std;

int main()
{
 // Initial System data
 int teaStock = 200;
 int customerCount = 50;

 // Customer inputs

 string customerName, teaName;
 double pricePerCup;
 int quantity;
 bool premiumMember, couponAvailable;

 cout << "\"Smart Cafe Billing System\"\n\n";

 cout << "Enter Customer Name: ";
 getline(cin,customerName);

 cout << "Enter Tea Name: ";
 getline(cin,teaName);

 cout << "Enter price per cup: ";
 cin  >> pricePerCup;

 cout << "Enter quantity ordered: ";
 cin >> quantity;

 cout << "Premium Member? (1=yes, 0=no): ";
 cin >> premiumMember;

 cout << "Coupon available? (1=yes, 0=no): ";
 cin >> couponAvailable;

 cout << "\n";

 // Validation
 if (pricePerCup<=0) {
  cout << "ERROR: Price must be greater than 0";
  return 0;
  // return 0; or retuen; is called guard clause or early return
  // Early return: stop program if input is invalid
  // return 1; normal code continues here
 }

 if (quantity<=0) {
  cout << "ERROR: Quantity must be greater than 0";
  return 0;
 }

 if (quantity>teaStock) {
  cout << "ERROR: Not enough stock available.";
  return 0;
 }

 // Successful order
 customerCount++;
 
 // Base bill
 double baseBill = pricePerCup*quantity;
 double bulkDiscount = 0;
 double memberDiscount = 0;
 double couponDiscount = 0;

 double finalBill = baseBill;

 // Bulk Discount
 if (quantity>10) {
  bulkDiscount = finalBill*0.15;
  finalBill-=memberDiscount;
 }

 // Premium Member discount
 if (premiumMember) {
  memberDiscount = finalBill*0.05;
  finalBill-=memberDiscount;
 }

 // Coupon Discount
 if (couponAvailable && finalBill>200) {
  couponDiscount = 50;
  finalBill-=couponDiscount;
 }

 // Delivery charges
 double deliveryCharge = 0;

 if (finalBill>=500 || premiumMember) {
  deliveryCharge = 0;
 }
 else {
  deliveryCharge = 40;
 }

 finalBill+=deliveryCharge;

 // Inventory update
 teaStock-=quantity;

 // Loyalty points
 int loyaltyPoints = (int)(finalBill/100) * 10;

 // Even/Odd order check (Modulus example)
 string orderType;
 if (quantity%2==0) {
  orderType = "Even quantity order";
 }
 else {
  orderType  ="Odd quantity order";
 }

 // Low Stock warning
 bool lowInventory = false;
 if (teaStock<20) {
  lowInventory = true;
 }

 // total discount
 double totalDiscount = bulkDiscount+memberDiscount+couponDiscount;

 // Output summary
 cout << "\n\n\"ORDER SUMMARY\"\n";
 cout << "Customer Name    : " << customerName << endl;
 cout << "Tea Name         : " << teaName << endl;
 cout << "Quantity Ordered : " << quantity << endl;
 cout << "Order Type       : " << orderType << endl;

 cout << "\n\n\"BILLING\"\n";
 cout << "Base bill        : Rs. " << baseBill << endl;
 cout << "Bulk discount    : Rs. " << bulkDiscount << endl;
 cout << "Member discount  : Rs. " << memberDiscount << endl;
 cout << "Coupon discount  : Rs. " << couponDiscount << endl;
 cout << "Total discount   : Rs. " << totalDiscount << endl;
 cout << "Delivery charge  : Rs. " << deliveryCharge << endl;
 cout << "Final Amount     : Rs. " << finalBill << endl;
 
 cout << "\n\n\"REWARDS\"\n";
 cout << "Loyalty points   : " << loyaltyPoints << endl;
 
 cout << "\n\n\"SYSTEM\"\n";
 cout << "Remaining stock  : " << teaStock << endl;
 cout << "Customer count   : " << customerCount << endl;

 if (lowInventory) {
  cout << "WARNING: Low Inventory!\n";
 }


 return 0;
}