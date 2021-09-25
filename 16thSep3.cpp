// Demonstrate invoking member function with different ways (3-ways), but no dynamic memory allocation being used
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
    student s, *ptr;
    ptr = &s;
    cout << "Invoking through object" << endl;
    s.input();
    s.output();
    cout << "\n-------------------------------------------------------------------------------------" << endl;
    cout << "Invoking through pointer" << endl;
    (*ptr).input();
    (*ptr).output();
    cout << "\n-------------------------------------------------------------------------------------" << endl;
    cout << "Invoking through pointer using arrow operator" << endl;
    ptr->input();
    ptr->output();
    return 0;
}