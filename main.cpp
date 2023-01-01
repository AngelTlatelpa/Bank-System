#include "CreateAccount.h"
using namespace std;

int main() {
    CreateAccount person1;
    person1.Welcome();
    person1.Email();
    person1.CreateUsername();
    person1.CreatePassword();
    person1.FakeSSN();
    person1.EnterLogin();
    person1.LoginUser();
    person1.LoginPass();
    person1.CheckLoginInfo();
    return 0;
}