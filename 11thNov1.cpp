// WAP to find absolute value using function template
#include <iostream>
using namespace std;

template <class Test>
Test absolute(Test num){
    return (num < 0 ? -num : num);
}

int main(){
    int a = -5;
    cout << "Absolute value of " << a << " = " << absolute(a) << endl;
    return 0;
}