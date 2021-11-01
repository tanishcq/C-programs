// Overload + and - operator of complex class
#include <iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int r, int i){
        real = r;
        img = i;
    }
    void display(){
        cout << real << " + " << img << "i";
    }
    complex operator+(complex op){
        complex t;
        t.real = real + op.real;
        t.img = img + op.img;
        return t;
    }
    complex operator-(complex op){
        complex t;
        t.real = real - op.real;
        t.img = img - op.img;
        return t;
    }
};
int main(){
    system("cls");
    complex c1(4, 2), c2(7, 0), c3;
    cout << "First complex number : ";
    c1.display();
    cout << "\nSecond complex number : ";
    c2.display();
    c3 = c1 + c2;
    cout << "\nC1 + C2 : ";
    c3.display();
    c3 = c1 - c2;
    cout << "\nC1 - C2 : ";
    c3.display();
    return 0;
}
