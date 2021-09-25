// create student class (name, marks in 5 subject (array) percentage)
// a. input name, marks in 5 subject 
// b. calculate percentage- percentage to be calculated
// c. output- nesting of member function 
// 5 students' array
#include <iostream>
using namespace std;

class student{
    private:
    string name;
    float marks[5];
    float checkPercentage();

    public:
    void input();
    void output();
};

float student::checkPercentage(){
        float sum = 0;
        for(int i = 0; i<5; i++){
            sum += marks[i];
        }
    return sum/5;
}

void student::input(){
    cout << "Name : ";
    cin >> name;
    cout << "Marks of top 5 subjects" << endl;
    for(int i = 0; i<5; i++)
        cin >> marks[i];
    cout << endl;
}

void student::output(){
    cout << "Name : " << name << endl;
    cout << "Marks : \n";
    for(int i = 0; i<5; i++) cout << marks[i] << endl;
    cout << "Percentage : " << checkPercentage() << endl;
}

int main(){
    student s[5];
    for(int i = 0; i<5; i++){
        cout << "Add details of student " << i+1 << endl;
        s[i].input();
    }
    for(int i = 0; i<5; i++){
        cout << "Details of student " << i+1 << endl;
        s[i].output();
    }
    return 0;
}