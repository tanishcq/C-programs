// demonstrate use of static data members and static member functions (use 'this')
#include <iostream>
using namespace std;

class app{
    private: 
    string name, eid, pass;

    public:
    static int noOfRegisteredUsers;
    static int fetchNoOfRegisteredUsers();
    void fetchDetails();
    void registerUser(string, string, string);
};

void app::registerUser(string name, string eid, string pass){
    this->name = name;
    this->eid = eid;
    this->pass = pass;
    noOfRegisteredUsers++;
}

void app::fetchDetails(){
    cout << "Name : " << this->name << endl;
    cout << "Email : " << this->eid << endl;
    cout << "Password : " << this->pass << endl;
}

int app::noOfRegisteredUsers;
int app::fetchNoOfRegisteredUsers(){
    return noOfRegisteredUsers;
}

int main(){
    string name, email, pass;
    int n;
    app user[5];
    cout << "Enter the number of users to register(max5) : ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "\nEnter details of User " << i+1 << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Email : ";
        cin >> email;
        cout << "Password : ";
        cin >> pass;
        user[i].registerUser(name, email, pass);
    } 
    for(int i = 0; i<n; i++){
        cout << "\nDetails of User " << i+1 << endl;
        user[i].fetchDetails();
    }
    cout << "----------------------------------------------------------------------------------------- \n";
    cout << "\nNo. of registered users (class variable) : " << app::noOfRegisteredUsers << endl;
    cout << "No. of registered users (class method ): " << app::fetchNoOfRegisteredUsers() << endl;
    cout << "No. of registered users (object variable) : " << user[5].noOfRegisteredUsers << endl;
    cout << "No. of registered users (object method ): " << user[5].fetchNoOfRegisteredUsers() << endl;
    return 0;
}