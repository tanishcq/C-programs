#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x
#define string std::string

class Employee{
    public:
    long long empId;
    string name;
    int sal;
    Employee(){
        sal = 0;
    }

};

int main(){
    Employee e1[5];
    return 0;
}