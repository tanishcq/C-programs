#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class student{
    private: 
        int roll_no;
        char name[25];
    public:
        void input(){
            cout << "Roll no. : ";
            cin >> roll_no;
            cout << "Name : ";
            cin >> name;
        };
        void output(){
            cout << "printing data from class members" << endl;
            cout << roll_no << endl << name;
        };
};

int main(){
    student s;
    s.input();
    s.output();
    return 0;
}