// WAP to implement function template with multiple arguments of same type(Swap two values)
#include <iostream>
using namespace std;

template <class Test>
void swapp(Test &a, Test &b){
    Test temp = b;
    b = a;
    a = temp;
}

int main(){
    int a = -5, b = 10;
    cout << "Value of a and b before swap : " << a << ", " << b << endl;
    swapp(a, b);
    cout << "Value of a and b after swap : " << a << ", " << b << endl;
    return 0;
}