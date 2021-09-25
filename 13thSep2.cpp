// Demonstrate working of friend class
#include <iostream>
using namespace std;

class A{
    public:
    int n = 5;
    friend class B;
};

class B{
    public:
    void output(A);
};

void B::output(A a){
    cout << "Value of n : " << a.n << endl;
}

int main(){
    A a;
    B b;
    b.output(a);
    return 0;
}