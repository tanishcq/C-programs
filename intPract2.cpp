#include <iostream>
#include <string>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x
#define string std::string

class Student{
    public:
    string name;
    int rollNo;
    void input(){
       coute("\nEnter the Name and Roll no. of the student");
       cout("Name : ");
       std::getline(std::cin, name); 
       cout("Roll No. : ");
       cin(rollNo); 
    }
};

class Exam: public Student{
    protected:
    int marks[6];
    public:
    void inputMarks(){
        coute("\nEnter student's marks in 6 subjects ");
        for(int i = 0; i<6; i++) cin(marks[i]);
    }
};

class Result: public Exam{
    protected:
    float totalMarks;
    float percentage;

    public:
    void calcPercent(){
        totalMarks = 0;
        for(int i = 0; i<6; i++) {
            totalMarks+=marks[i];
        }
        percentage = totalMarks/6;
    }
    void studentResult(){
        coute("\nResult of student");
        coutes("Name : ", name);
        coutes("Roll No : ", rollNo);
        coutes("Percentage : ", percentage);
    }
};

int main(){
    Result s;
    s.input();
    s.inputMarks();
    s.calcPercent();
    s.studentResult();
    return 0;
}