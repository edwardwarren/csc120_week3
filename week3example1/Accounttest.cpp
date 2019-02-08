//
// Created by edward.warren on 2/7/2019.
//
#include <iostream>
#include "Account.h

using namespace std;

int main() {
    //create two Account objects
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7 };

    // display initial value of name for each Account
    cout << "account1: " <<account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "account2: " <<account2.getName() << " balance is $"
    << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\n\naccount1: " <<account2.getName() << " balance is $"
    << account2.getBalance();

    cout <<"\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit.(depositAmount);

    //display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance() <<e endl;















}
