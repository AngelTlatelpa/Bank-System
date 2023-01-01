#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H


#include <iostream>
#include "Balance.h"
using namespace std;

class CreateAccount {
    private:
        string email;
        string SSN;
        string name;
        string Password;
        string UserName;
        string LoginName;
        string LoginPassword;

public:
        CreateAccount();

        void Welcome();

        void CreateUsername();

        void CreatePassword();

        void Email();

        void FakeSSN();

        void LoginUser();

        void LoginPass();

        void CheckLoginInfo();

        void EnterLogin();
    };



    CreateAccount::CreateAccount() {
        this->email = "n";
        this->SSN = "n";
        this->Password = "n";
        this->UserName = "null";
        this->name = "null";
    }



    void CreateAccount::Welcome() {
        cout << "-------------------------------------" << endl;
        cout << "Hello welcome to the Bank Of Brooklyn!" << endl;
        cout << "Join us! Start by Creating An Account!" << endl;
        cout << "-------------------------------------" << endl;
    }



    void CreateAccount::Email() {
        cout << "Enter Email: ";
        cin >> this->email;
    }



    void CreateAccount::FakeSSN() {
        cout << "Enter Fake SSN: ";
        cin >> this->SSN;
    };



    void CreateAccount::CreateUsername() {
        cout << "Create Username: ";
        cin >> this->UserName;
    }



    void CreateAccount::CreatePassword() {
        cout << "Create Password: ";
        cin >> this->Password;
    }



    void CreateAccount::EnterLogin() {
    cout << "Now Enter Login Information" << endl;
    }



    void CreateAccount::LoginUser() {
    cout << "Enter Username: ";
    cin >> LoginName;
    }



    void CreateAccount::LoginPass() {
    cout << "Enter Password: ";
    cin >> LoginPassword;
    }


    void CreateAccount::CheckLoginInfo() {
        while (UserName != LoginName && LoginPassword != Password) {
            cout << "Incorrect" << endl;
            LoginUser();
            LoginPass();
        }
        Balance PersonB;
        PersonB.ShowMenu();
        PersonB.Options();
    }



#endif