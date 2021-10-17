// demonstrate the use of virtual base class in case of multipath inheritance
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x
#define string std::string

class first{
    protected:
    int x;

    public:
    void input(){
        cout("\nInside first class\nEnter an integer : ");
        cin(x);
    }
    void output(){
        coutes("\nValue of X in first class : ", x);
    }
};

class second: virtual public first{
    protected: 
    float y;

    public:
    void input(){
        first::input();
        cout("\nInside second class\nEnter a floating point number : ");
        cin(y);
    }
    void output(){
        first::output();
        coutes("Value of Y in second class : ", y);
    }
};

class third: virtual public first{
    protected:
    char z;

    public:
    void input(){
        first::input();
        cout("\nInside third class\nEnter a character : ");
        cin(z);
    }
    void output(){
        first::output();
        coutes("Value of Z in third class : ", z);
    }
};

class fourth: public second, public third{
    public:
    void input(){
        second::input();
        third::input();
    }
    void output(){
        second::output();
        third::output();
    }
};

int main(){
    system("cls");
    fourth obj;
    obj.input();
    obj.output();
    return 0;
}