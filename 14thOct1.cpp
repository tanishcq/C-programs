// demonstrate constructor invocation in multiple inheritence
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x
#define string std::string

class alpha{
    protected:
    int m;

    public:
    alpha(int a){
        coute("Alpha constructor invoked!");
        m = a;
    }
    
    void display(){
        coutes("\nAlpha M : ", m);
    }
};

class beta{
    protected:
    float n;

    public:
    beta(float b){
        coute("Beta constructor invoked!");
        n = b;
    }

    void display(){
        coutes("Beta N : ", n);
    }
};

class gamma: public alpha, public beta{
    protected:
    int x, y;

    public:
    gamma(int a, int b, int c, float d): alpha(a), beta(d){
        coute("Gamma constructor invoked!");
        x = b;
        y = c;  
    }

    void display(){
        alpha::display();
        beta::display();
        coutes("Gamma X : ", x);
        coutes("Gamma Y : ", y);
    }
};

int main(){
    system("cls");
    gamma obj(1, 2, 3, 4.5);
    obj.display();
    return 0;
}