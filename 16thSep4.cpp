// Demonstrate invoking member function with different ways (2-ways), with the concept of memory allocation concept
#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int marks;

    public:
    void input(){
        cout << "Enter student details" << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Marks : ";
        cin >> marks;
    }
    void output(){
        cout << "\nDetails of student" << endl;
        cout << "Name : " << name << " Marks : " << marks << endl;
    }
};

int main(){
    student *ptr;
    ptr = new student;
    cout << "Invoking through pointer" << endl;
    (*ptr).input();
    (*ptr).output();
    cout << "\n-------------------------------------------------------------------------------------" << endl;
    cout << "Invoking through pointer using arrow operator" << endl;
    ptr->input();
    ptr->output();
    return 0;
}