// 20. Write a program that uses a function to negate an integer. Use call by reference in C style.
// 21. Write a program that uses a function to negate an integer. Use call by reference in C++ style.

#include <iostream>
using namespace std;


void negateUsingC(int*);
void negateUsingCpp(int&);

int main(){
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    cout << "Negating integers" << endl;
    cout << "C style : ";
    negateUsingC(&n);
    cout << n << endl;
    cout << "C++ style : ";
    negateUsingCpp(n);
    cout << n << endl;
    return 0;
}


void negateUsingC(int *ptr){
    (*ptr)*=-1;
}


void negateUsingCpp(int &n){
    n *= -1;
}