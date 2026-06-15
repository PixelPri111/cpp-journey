/*
# Smart Café Billing & Inventory Management System

## Problem Statement

You are developing a billing and inventory management system for a café that sells different types of tea. The café wants a program that can process customer orders, apply discounts, manage inventory, track customer statistics, and determine delivery eligibility.

The program should accept the following inputs from the user:

* Customer Name
* Tea Name
* Price per Cup
* Quantity Ordered
* Premium Membership Status (Yes/No)
* Coupon Availability (Yes/No)

---

## Order Validation

Before processing the order, validate the following:

1. Price per Cup must be greater than 0.
2. Quantity Ordered must be greater than 0.

If either condition fails, display an appropriate error message and terminate the order.

---

## Bill Calculation

Calculate the Base Bill using:

Base Bill = Price per Cup × Quantity Ordered

Store and display the calculated value.

---

## Discount Rules

### Bulk Order Discount

If the customer orders more than 10 cups of tea, apply a 15% discount on the Base Bill.

### Premium Member Discount

If the customer is a premium member, apply an additional 5% discount on the amount remaining after the bulk discount.

### Coupon Discount

If the customer has a coupon and the bill amount after previous discounts exceeds ₹200, apply a flat ₹50 discount.

---

## Delivery Charges

The café provides free delivery under the following conditions:

* Final Bill Amount is greater than or equal to ₹500
  OR
* Customer is a Premium Member

Otherwise, add a delivery charge of ₹40.

Display whether delivery is free or chargeable.

---

## Inventory Management

The café currently has 200 tea packets in stock.

Assume:

1 tea packet = 1 cup of tea sold

After every order:

* Reduce inventory according to quantity ordered.
* Display the remaining stock.

If stock becomes less than 20 packets, display:

"Low Inventory Warning"

---

## Customer Statistics

The café currently serves 50 customers.

When an order is successfully processed:

* Increment the customer count.

If an order is cancelled:

* Decrement the customer count.

Display the updated customer count.

---

## Loyalty Points System

The café rewards customers based on their spending.

For every ₹100 spent in the final bill amount:

* Award 10 loyalty points.

Example:

Final Bill = ₹850

Loyalty Points = 80

Display the loyalty points earned.

---

## Order Summary

At the end of execution, display:

* Customer Name
* Tea Name
* Quantity Ordered
* Base Bill
* Total Discount Applied
* Delivery Charges
* Final Payable Amount
* Loyalty Points Earned
* Remaining Inventory
* Updated Customer Count

---

## Concepts Covered

This project should demonstrate the practical use of:

* Arithmetic Operators (+, -, *, /, %)
* Assignment Operators (=, +=, -=, *=, /=)
* Comparison Operators (>, <, >=, <=, ==, !=)
* Logical Operators (&&, ||, !)
* Increment and Decrement Operators (++ and --)
* Type Casting
* User Input and Output
* if, else if, else, and Nested Conditionals

*/