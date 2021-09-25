// Create two classes pt_std and ft_std. There is a friend function which is friend of both the classes and it displays all the details of the student having greater marks
#include <iostream>
using namespace std;

class pt_std{
    private:
    string name;
    int id;

    public:
    int marks;
    void input(){
        cout << "\nEnter the details of part time student " << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Student ID : ";
        cin >> id;
        cout << "Marks : ";
        cin >> marks;
    }
    void output(){
        cout << "\nName : " << name << endl;
        cout << "Student ID : " << id << endl;
        cout << "Marks : " << marks << endl;
    }
};

class ft_std{
    private:
    string name;
    int id;

    public:
    int marks;
    void input(){
        cout << "\nEnter the details of full time student " << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Student ID : ";
        cin >> id;
        cout << "Marks : ";
        cin >> marks;
    }
    void output(){
        cout << "\nName : " << name << endl;
        cout << "Student ID : " << id << endl;
        cout << "Marks : " << marks << endl;
    }
    friend void compare(pt_std, ft_std);
};

void compare(pt_std a, ft_std b){
    if(a.marks > b.marks){
        cout << "\nPart time student did better." << endl;
        a.output();
    }
    else if(b.marks > a.marks){
        cout << "\nFull time student did better." << endl;
        b.output();
    }
    else{
        cout << "\nBoth performed equally" << endl;
        a.output();
        b.output();
    }
}

int main(){
    pt_std a;
    ft_std b;
    a.input();
    b.input();
    compare(a, b);
    return 0;
}