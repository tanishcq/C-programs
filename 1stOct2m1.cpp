// demonstrate multilevel inheritence with same function name (METHOD 1)
#include <iostream>
#define coute(x) std::cout << x << std::endl

class a{
    public:
    void test(){
        coute("class A test() invoked");
    }
};

class b : public a{
    public:
    void test(){
        coute("class B test() invoked");
    }
};

class c : public b{
    public:
    void test(){
        coute("class A test() invoked");
    }
};

int main(){
    c obj;
    obj.a::test();
    obj.b::test();
    obj.c::test();
    return 0;
}