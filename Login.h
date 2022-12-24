#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include "CreateAccount.h"

using namespace std;

class NowLogin: public CreateAccount{
public:
    NowLogin();
    void LoginUser();
    void LoginPass();
    void CheckLoginInfo();
    void PrintLogin();
    string GetName()
    {
        return LoginName;
    }
    string GetPass()
    {
        return LoginPassword;
    }
    void EnterLogin();
private:
    string LoginName;
    string LoginPassword;
};

NowLogin::NowLogin(){
    LoginName = "NULL";
    LoginPassword = "NULL";
}

void NowLogin::EnterLogin() {
    cout << "Now Enter Login Information" << endl;
}

void NowLogin::LoginUser() {
    cout << "Enter Username: ";
    cin >> LoginName;
}

void NowLogin::LoginPass() {
    cout << "Enter Password: ";
    cin >> LoginPassword;
}

void NowLogin::PrintLogin(){
    cout << "This is the Login Name " << LoginName << endl;
    cout << "This is the Login Password " << LoginPassword << endl;
}

void NowLogin::CheckLoginInfo() {
   if(GetUser()==GetName())
   {
       cout << "Correct";
       cout << GetUser();
       cout << GetName();
   }
   else
   {
       cout << "Incorrect"<< endl;
       cout << this->UserName << endl;
       cout << this->LoginName << endl;
   }
}




#endif