// Demonstrate objects within a class
#include <iostream>
using namespace std;

class alpha{
    int x;
    public:
    alpha(int i){
        cout << "alpha constructor invoked" << endl;
        x = i;
    }
    void display(){
        cout << "Value of X in class alpha : " << x << endl;
    }
};

class beta{
    alpha a;
    int y;
    public:
    beta(int m, int n): a(m), y(n){
        cout << "beta constructor invoked" << endl;
    }
    void display(){
        a.display();
        cout << "Value of Y in class beta : " << y << endl;
    }
};

int main(){
    beta b(1, 2);
    b.display();
    return 0;
}