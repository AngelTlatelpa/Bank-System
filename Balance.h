#ifndef BALANCE_H
#define BALANCE_H

#include <iostream>
#include "CreateAccount.h"
#include "Login.h"

using namespace std;

class Balance{
private:
    int balance;
    int withdraw;
    int deposit;
public:
    void showMenu();
    void showBalance();
    void withDraw();
    void Deposit();
};

void Balance::showMenu() {
    
}
#endif
