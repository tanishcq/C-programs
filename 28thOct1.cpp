#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i";
    }
    friend complex operator+(complex op1, complex op2)
    {
        complex t;
        t.real = op1.real + op2.real;
        t.img = op1.img + op2.img;
        return t;
    }
    friend complex operator+(complex op1, int op2)
    {
        complex t;
        t.real = op1.real + op2;
        t.img = op1.img;
        return t;
    }
    friend complex operator+(int op1, complex op2)
    {
        complex t;
        t.real = op1 + op2.real;
        t.img = op2.img;
        return t;
    }
    friend complex operator-(complex op1, complex op2)
    {
        complex t;
        t.real = op1.real - op2.real;
        t.img = op1.img - op2.img;
        return t;
    }
    friend complex operator-(int op1, complex op2)
    {
        complex t;
        t.real = op1 - op2.real;
        t.img = op2.img;
        return t;
    }
    friend complex operator-(complex op1, int op2)
    {
        complex t;
        t.real = op1.real - op2;
        t.img = op1.img;
        return t;
    }
};
int main()
{
    system("cls");
    complex c1(10, 15), c2(4, 8), c3;
    cout << "First complex number= ";
    c1.display();
    cout << "\nSecond complex number= ";
    c2.display();
    c3 = c1 + c2;
    cout << "\nC1+C2= ";
    c3.display();
    c3 = c1 - c2;
    cout << "\nC1-C2= ";
    c3.display();
    c3 = c1 + 10;
    cout << "\nc1 + 10= ";
    c3.display();
    c3 = 20 + c2;
    cout << "\n20 + c2= ";
    c3.display();
    c3 = c1 - 10;
    cout << "\nc1 - 10= ";
    c3.display();
    c3 = 20 - c2;
    cout << "\n20 - c2= ";
    c3.display();
    return 0;
}
