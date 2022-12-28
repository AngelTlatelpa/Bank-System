#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H



using namespace std;

class CreateAccount{
private:
    string email;
    string SSN;
public:
    string UserName;
    string Password;
    CreateAccount();
    void Welcome();
    void CreateUsername();
    void CreatePassword();
    void Email();
    void FakeSSN();
    void print();
    string GetUser(){
        return UserName;
    }

    string GetCreatedPassword(){
        return this->Password;
    };
};

CreateAccount::CreateAccount() {
    this->email = "n";
    this->SSN = "n";
    this->Password = "n";
    this->UserName = "n";
}

void CreateAccount::Welcome()
{
    cout << "-------------------------------------" << endl;
    cout << "Hello welcome to the Bank Of Brooklyn!"<< endl;
    cout << "Join us! Start by Creating An Account!"<< endl;
    cout << "-------------------------------------" << endl;
}


void CreateAccount::Email()
{
    cout << "Enter Email: ";
    cin >> this->email;
}


void CreateAccount::FakeSSN()
{
    cout << "Enter Fake SSN: ";
    cin >> this->SSN;
};


void CreateAccount::CreateUsername()
{
    cout << "Create Username: ";
    cin >> this->UserName;
}


void CreateAccount::CreatePassword()
{
    cout << "Create Password: ";
    cin >> this->Password;
}


void CreateAccount::print(){
    cout << "This is the userName " << this->UserName << endl;
    cout << "This is the Password " << this->Password << endl;
}




#endif
