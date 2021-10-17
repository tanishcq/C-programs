#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x
#define string std::string
#define ll long long 

class id{
    protected: 
    string name, school;
    ll idno;
    int age;

    public:
    void input(){
        cout("\nName : ");
        getline(std::cin, name);
        cout("Age : ");
        cin(age);
        cout("Id number : ");
        cin(idno);
    }

    // id(string str){
    //     school = str;
    // }
};

class student: public id{
    protected:
    int grade;

    public:
    void studentInput(){
        id::input();
        cout("Grade : ");
        cin(grade);
    }
};

class teacher: public id{
    protected:
    ll salary;

    public:
    void teacherInput(){
        id::input();
        cout("Salary : ");
        cin(salary);
    }
};

int main(){
    // string school_name = "DPS";
    student s;
    s.studentInput();
    fflush(stdin);
    teacher t;
    t.teacherInput();
    return 0;
}