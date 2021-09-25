// Demonstrate Destructing of static objects
#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl

class test{
    static int count;
    public:
    test(){
        cout << "\nObject number " << ++count << " constructed!" << endl;
    }
    ~test(){
        cout << "\nObject number " << count-- << " destroyed!" << endl;
    }
};

int test::count;

int main(){
    cout << "\ncontrol inside main" << endl;
    test o1;
    {
        cout << "\ncontrol inside inner block" << endl;
        test o2, o3;
        cout << "\ncontrol leaving inner block" << endl;
    }
    cout << "\ncontrol back to main" << endl;
    return 0;
}