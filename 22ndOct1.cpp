// Demonstrate class within a class
#include <iostream>
using namespace std;

class outer{
    int a;
    public:
    outer(int x){
        a = x;
    }
    void display(){
        cout << "Value of A in outer class : " << a << endl;
    }
    class inner{
        int b;
        public:
        inner(int y){
            b = y;
        }
        void display(){
            cout << "Value of B in inner class : " << b << endl;
        }
    };
};

int main(){
    outer o(10);
    outer::inner i(20);
    o.display();
    i.display();
    return 0;
}