// Demonstrate concept of abstract base class
#include <iostream>
#define cout(x) std::cout << x
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x

class shape{
    protected:
    int l, b;

    public:
    virtual void area() = 0;
};

class rectangle: public shape{
    int a;

    public:
    void input(){
        cout("Length : ");
        cin(l);
        cout("Bredth : ");
        cin(b);
    }
    void area(){
        a = l*b;
    }
    void output(){
        coutes("Area of rectangle : ", a);
    }
};

int main(){
    rectangle r;
    r.input();
    r.area();
    r.output();
    return 0;
}
