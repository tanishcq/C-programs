// demonstrate the use of initialization section and assignment section in constructor in the scenario of multiple inheritance
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x
#define string std::string

class alpha{
    int a;
    public:
    alpha(int a){
        coute("Alpha constructor invoked!");
        this->a = a;
    }
    void display(){
        coutes("Value of A inside Alpha is ", a);
    }
};

class beta{
    float m, n;
    public:
    beta(float x, float y): m(x), n(x+y){
        coute("Beta constructor invoked!");
    }
    void display(){
        coutes("Value of M inside Beta is ", m);
        coutes("Value of N inside Beta is ", n);
    }
};

class gamma: public alpha, public beta {
    int x, y;
    public:
    gamma(int a, int b, float c): alpha(a*2), beta(c, c), x(a){
        coute("Gamma constructor invoked!");
        y = b; 
    }
    void display(){
        coutes("Value of X inside Gamma is ", x);
        coutes("Value of Y inside Gamma is ", y);
    }
};

int main(){
    gamma obj(1, 2, 3.5);
    coute("\nDisplaying all members");
    obj.alpha::display();
    obj.beta::display();
    obj.gamma::display();
    return 0;
}