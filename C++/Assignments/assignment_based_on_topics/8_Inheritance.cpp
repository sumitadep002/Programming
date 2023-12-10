/*
You are provided with a simple Account class hierarchy that contains
Account - Base class
Savings Account - Derived class
An Account has a name and a balance.
A Savings Account is an Account and adds an interest rate.
I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
that make it easy to display, deposit to, and withdraw from a vector of Accounts and Savings 
Accounts.
Please refer to the source code provided and the video explanation of this challenge for more 
details.
Your challenge is the following:
1. Add a Checking account class to the Account hierarchy
 A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 Every withdrawal transaction will be assessed this flat fee.
2. Add a Trust account class to the Account hierarchy
 A Trust account has a name, a balance, and an interest rate
 The Trust account deposit works just like a savings account deposit.
 However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
 
 The Trust account withdrawal should only allow 3 withdrawals per year and each of these must 
be less than 20% of the account balance.
 You don't have to keep track of calendar time for this application, just make sure the 4th 
withdrawal fails :)

*/
#include<iostream>
using namespace std;
class Account{
    string name;
    float balance;

};

class Savings_Account:Account{

}