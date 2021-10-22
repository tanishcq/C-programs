// Demonstrate virtual functions for runtime polymorphism
#include <iostream>
using namespace std;

class base{
    int a;
    public:
    virtual void display(int i){
        a = i;
        cout << "value of a in base class : " << a << endl;
    }
    base(){
        cout << "base class invoked" << endl;
    }
};

class derived: public base{
    int b;
    public:
    void display(int j){
        b = j;
        cout << "value of b in derived class : " << b << endl;
    }
    derived(){
        cout << "derived class invoked" << endl;
    }
};

int main(){
    derived d;
    base *b;
    b = new base;
    b -> display(1);
    b = &d;
    b -> display(2);
    return 0;
}