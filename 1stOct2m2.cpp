// demonstrate multilevel inheritence with same function name (METHOD 2)
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
        coute("class C test() invoked");
        a::test();
        b::test();
    }
};

int main(){
    c obj;
    obj.test();
    return 0;
}