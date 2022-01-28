// Employee Class with Constructor for input.
#include <iostream>
#define string std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl

int count = 0;

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
    employee();
    employee(string);
    ~employee();
    void input();
    void output();  
};

employee::employee(){
    cout << "\nConstructor invoked!" << "(no. of invocations until now : " << ++count << " )" << endl;
    input();
}

employee::employee(string str){
    name = str;
}

employee::~employee(){
    cout << "\nDestructor invoked!" << endl;
}

void employee::input(){
    if(name == ""){
        cout << "Employee Name : "; 
        cin >> name;
    }
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
    {
        cout << "Control inside inner block!" << endl;
        employee emp[5];
        for(int i = 0; i<5; i++){
            cout << "\nDetails of Employee " << i+1 << endl;
            emp[i].output();
        }
        cout << "Control leaving inner block!" << endl;
    }
    return 0;
}