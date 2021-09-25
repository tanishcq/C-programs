// constructor overloading
#include <iostream>
using namespace std;

class test{
    int a, b;
    
    public:
    test(){
        cout << "Default constructor invoked!" << endl;
        a = b = 0;
    }

    test(int a, int b = 10){
        this->a = a;
        this->b = b;
    }

    void show(){
        cout << "Value of A and B are " << a << " and " << b << " respectively." << endl;
    }
};

int main(){
    system("cls");
    test t1, t2(5), t3(7,21);
    t1.show();
    cout << "\nParameterized constructor with deafult arguments invoked!" << endl;
    t2.show();
    cout << "\nParameterized constructor with both arguments passed is invoked!" << endl;
    t3.show();
    return 0;
}