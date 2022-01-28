// WAP to illustrate overiding of member functions
#include <iostream>
#define cout(x) std::cout << x << std::endl

class Base {
   public:
    void print() {
        cout("Base class :: Print Function");
    }
};

class Derived : public Base {
   public:
    void print() {
        cout("Derived class :: Print Function");
    }
};

int main(){
    Derived obj;
    obj.print();
    return 0;
}