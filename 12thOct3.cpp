#include <iostream>
#define cout(x) std::cout << x << std::endl
#define cin(x) std::cin >> x

class top{
    public:
    void output(){
        cout("Top");
    }
};

class mid{
    public:
    void output(){
        cout("Mid");
    }
};

class bottom1: public mid, public top{
    public:
    void output(){
        cout("Bottom");
    }
};

class bottom2: public mid, public top{
    public:
    void output(){
        top::output();
        mid::output();
        cout("Bottom");
    }
};

int main(){
    bottom1 obj1;
    cout("\nMethod 1 : ");
    obj1.top::output();
    obj1.mid::output();
    obj1.bottom1::output();
    bottom2 obj2;
    cout("\nMethod 2 : ");
    obj2.bottom2::output();
    return 0;
}