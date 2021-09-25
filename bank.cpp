#include <iostream>
#include <conio.h>
using namespace std;

class bankAccount{
    private:
    string name;
    string accountType;
    long long accountNumber;
    double balance = 0;
    
    public:
        void createAccount();
        void deposit();
        void withdraw();
};

void bankAccount::createAccount(){
    cout << "Account holder name : ";
    cin >> name;
    cout << "Account type : ";
    cin >> accountType;
}

void bankAccount::deposit(){
    system("cls");
    if(name.length() == 0){
        cout << "Error 404: No account in database!" << endl;
        return;
    }
    long long money;
    cout << "Balance : " << balance << endl;
    cout << "Enter amount to deposit : ";
    cin >> money;
    balance += money;
    cout << "Your new balance : " << balance << endl;
}

void bankAccount::withdraw(){
    system("cls");
    if(name.length() == 0){
        cout << "Error 404: No account in database!" << endl;
        return;
    }
    long long money;
    cout << "Balance : " << balance << endl;
    cout << "Enter amount to withdraw : ";
    cin >> money;
    if(balance >= money){
        balance -= money;
        cout << "Your new balance : " << balance << endl;
    }
    else
        cout << "Insuffient Balance" << endl;
}

int main(){
    bankAccount b;
    char c;
    int choice;
    do{
        system("cls");
        cout << "Welcome to World Bank" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch(choice){
            case 1: b.createAccount();
                    break;
            case 2: b.deposit();
                    break;
            case 3: b.withdraw();
                    break;
            default : cout << "\n Invalid choice!" << endl;
        }
        cout << "Do you want to conitnue? (Y/N)";
        c = getch();
    }while(c == 'Y' || c == 'y');
    return 0;
}