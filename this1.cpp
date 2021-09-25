// demonstrate use of static data member exists even before an object of the class is created
#include <iostream>
using namespace std;

class app{
    public:
    static int noOfUsers;
    static int getNoOfUsers();
};

int app::noOfUsers;
int app::getNoOfUsers(){
    return noOfUsers;
}

int main(){
    cout << "Initial values through variable and method respectively : " << app::noOfUsers << "  " << app::getNoOfUsers();
    cout << "\nChanging values of static variable explicitly" << endl;
    app::noOfUsers = 20;
    cout << "Final values through variable and method respectively : " << app::noOfUsers <<  "  " << app::getNoOfUsers();
    return 0;
}