// Demonstrate working of member function of one class as a friend function of other class
#include <iostream>
using namespace std;

class first{
    public:
    int a;
    void input(){
        cout << "Enter the value of a : ";
        cin >> a;
    }
};

class second{
    public:
    int b;
    void input(){
        cout << "Enter the value of b : ";
        cin >> b;
    }
    void output(first);
};

void second::output(first o){
    cout << "\nMember of class A : " << o.a << endl;
    cout << "Member of class B : " << b << endl;
}

int main(){
    first object1;
    second object2;
    object1.input();
    object2.input();
    object2.output(object1);
    return 0;
}
