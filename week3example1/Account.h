//
// Created by edward.warren on 2/7/2019.
//

#ifndef WEEK3EXAMPLE1_ACCOUNT_H
#define WEEK3EXAMPLE1_ACCOUNT_H


class Account {
#include <string>

    class Account {
    public:
        // Account constructor with two parameters
        Account(std::string accountName, int initialBalance)
        : name{accountName}{




        if (initialbalance > 0) {
            balance = initialBalance
        }
        }
    }
    void deposit(int depositAmount) {
        if (depositAmount > 0) {// if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
             }
    }
// function returns the account balance
int getBalance() const {
        return balance;
    }

    //function that sets the name
    void setName(std::string accountName){
        name = accountName;
    }
        // member function that sets the account name in the object
        void setName(std::string accountName) {
            name = accountName; // store the account name
        }

        //member function that retrieves the account name
        std::string getName() const {
            return name; // return name's value to this function
        }
    private:
        std::string name;
        int balance{0};
    };



#endif //WEEK3EXAMPLE1_ACCOUNT_H
