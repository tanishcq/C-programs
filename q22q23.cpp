// 22. Write a program that uses a function to swap two integers. Use call by reference in C style.
// 23. Write a program that uses a function to swap two integers. Use call by reference in C++ style.

#include <iostream>
using namespace std;

void swapUsingC(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingCpp(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x,y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    swapUsingC(&x, &y);
    cout << "Swapped numbers using C style" << endl;
    cout << "first number : " << x << endl;
    cout << "second number : " << y << endl;
    swapUsingCpp(x, y);
    cout << "Swapped numbers using C style" << endl;
    cout << "first number : " << x << endl;
    cout << "second number : " << y << endl;
    return 0;
}