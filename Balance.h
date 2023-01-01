#ifndef BALANCE_H
#define BALANCE_H

#include <iostream>
#include "CreateAccount.h"

using namespace std;

class Balance{
private:
    int balance;
    int withdraw;
    int deposit;
    string answer;
public:
    Balance();
    void ShowMenu();
    void Options();
    void ShowBalance();
};

Balance::Balance(){
    balance = 0;
    withdraw = 23;
    deposit = 34;
    answer = "null";
}
void Balance::ShowMenu() {
    cout << "Hello welcome to the bank of Angel!, " << endl;
    cout << "Your balance: is: " << balance << endl;
}

void Balance::ShowBalance() {
    cout << "Your balance is: " << balance << endl;
}

void Balance::Options() {
    cout << "Would you like to withdraw, deposit, or leave?" << endl;
    cout << "-----type \"deposit\" to deposit------" << endl;
    cout << "-----type \"withdraw\" to withdraw----" << endl;
    cout << "-----type \"leave\" to leave----------" << endl;
    cin >> answer;
    if(answer == "deposit"){
        cout << endl << "How much would you like to deposit: ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "Thank you for choosing Angel's Bank." << endl << "Deposit has been made." << endl;
        ShowBalance();
        Options();
    }else if(answer == "withdraw"){
        cout << "How much would you like to with to withdraw: ";
        cin >> withdraw;
        balance = balance - withdraw;
        cout << "Thank you for choosing Angel's Bank." << endl << "Withdraw has been made." << endl;
        ShowBalance();
        Options();
    }else if(answer == "leave"){
        cout << "Thank you for choosing Angel's Bank" << endl;
    }else{
        cout << "Typed something incorrectly" << endl;
        Options();
    }

}






#endif