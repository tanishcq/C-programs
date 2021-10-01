// Program to demonstrate single inheritance when Base class has only public members and visibility mode while inheriting is public.
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x

class shape{
    public:
    int width, height;
    void input(){
        coute("\nEnter the dimensions");
        cout("Width : ");
        cin(width);
        cout("Height : ");
        cin(height);
    }
    void output(){
        coute("\nOutput");
        cout("Width : ");
        coute(width);
        cout("Heigth : ");
        coute(height);
    }   
};

class rectangle: public shape{
    public:
    void getArea(){
        input();
        output();
        cout("Area : ");
        coute(width*height);
        
    }
};

int main(){
    system("cls");
    rectangle r;
    r.getArea();
    return 0;
}