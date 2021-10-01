// To demonstrate single inheritance when Base class has both private and public members and visibility mode while inheriting is private
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x

class shape{
    protected:
    int width, height;

    public:
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

class rectangle: private shape{
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