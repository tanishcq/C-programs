// Demonstrate multiple inheritence
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x
#define string std::string
#define ll long long

class bank{
    protected: 
    ll user_id;
    static ll current_user_id;
    string name, password, temp = "";   
    bank(): user_id(current_user_id++){};

    public:
    void addAccount();
};

ll bank::current_user_id;

void bank::addAccount(){
    cout("Enter details\n Username : ");
    cin(name);
    cout("Password : ");
    cin(password);
    cout("Retype password : ");
    cin(temp);
}

class authorization{
    protected:
    string password;

    public:
    bool login();
};

bool authorization::login(){
    coute("User Login");
    cout("Username : ");
    cin(name);
    cout("Password : ");
    cin(authorization::password);
    if(this->password == bank::password){
        return true;
    }
    return false;      
}

class transaction: public bank, public authorization{
    protected:
    ll balance;

    public:
    void displayDetails();
};

int main(){
    system("cls");
    string s1, s2;
    transaction user1;
    user1.bank::addAccount();
    if(user1.bank::temp == user1.bank::password){
        if(user1.login()==1){
            // user1.displayDetails();
            // user1.deposit();
            // user1.withdraw();
        }
        else{
            coute("Incorrect credentials");
        }
    }
    else{
        coute("Password not matched");
    }
    return 0;
}



