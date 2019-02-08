










#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount; // create Account object myAcount

    // show that the initial value of myAccount's name
    cout << "Initial account name is: " << myAccount.getname

    // prompt for and read name
    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName); //read a line of text
    myAccount.setName(theName); // put theName in myAccount

    //display the name stored in object myAccount
    cout << "Name in object myAccount is: "
    << myAccount.getname() << endl;
}

