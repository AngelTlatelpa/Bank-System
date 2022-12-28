#include "CreateAccount.h"
#include "Login.h"

using namespace std;

int main() {
    CreateAccount person1;
    person1.Welcome();
    person1.Email();
    person1.CreateUsername();
    person1.CreatePassword();
    person1.FakeSSN();
    person1.print();
    NowLogin personLogin;
    personLogin.EnterLogin();
    personLogin.LoginUser();
    personLogin.LoginPass();
    personLogin.PrintLogin();
    personLogin.CheckLoginInfo();
    return 0;
}
