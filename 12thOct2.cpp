#include <iostream> 
#define cout(x) std::cout << x << std::endl

class level1{    
    public:
    void lvl1(){
        cout("Level 1");
    }
};

class level2: public level1{
    public:
    void lvl2(){
        cout("Level 2");
    }
};

class level3{
    public:
    void lvl3(){
        cout("Level 3");
    }
};

class level4: public level3, public level2{
    public:
    void lvl4(){
        level1::lvl1();
        level2::lvl2();
        level3::lvl3();
        cout("Level 4");
    }
};

int main(){
    system("cls");
    level4 obj;
    obj.lvl4();
    return 0;
}