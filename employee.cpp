// Array of employees - 5 employees
// Data Members : name, emp_id, basic_sal, TA - 10% of basic, DA - 20%, HRA - 40%, Gross - Basic + TA + DA + HRA
// Member Functions : input(), Output() Pvt - Calculator()                             
#include <iostream>
using namespace std;

class employee{
    private:
    string name;
    long int empID;
    int basicSalary;
    int hra, ta, da, grossSalary;
    void calculate(){
        hra = basicSalary*0.3;
        ta = basicSalary*0.1;
        da = basicSalary*0.2;
        grossSalary = hra + ta + da + basicSalary;
        cout << "HRA : " << hra << endl;
        cout << "TA : " << ta << endl;
        cout << "Gross Salary : " << grossSalary << endl;
    }

    public:
    void input();
    void output();  
};

void employee::input(){
    cout << "Employee Name : ";
    cin >> name;
    cout << "Employee ID : ";
    cin >> empID;
    cout << "Basic Salary : ";
    cin >> basicSalary;
}

void employee::output(){
    cout << "Employee Name : " << name << endl;
    cout <<  "Employee ID : " << empID << endl;
    cout << "Basic Salary : " << basicSalary << endl;
    calculate();
}

int main(){
    employee emp[5];
    for(int i = 0; i<5; i++){
        cout << "\nEnter deatails of Employee " << i+1 << endl;
        emp[i].input();
    }
    for(int i = 0; i<5; i++){
        cout << "\nDetails of Employee " << i+1 << endl;
        emp[i].output();
    }
    return 0;
}