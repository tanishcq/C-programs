#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    system ("cls");
    int *ptr, n = 1;
    ptr = &n;
    cout << "Value of &n : " << &n << endl;
    cout << "Value of ptr : " << ptr << endl;
    cout << "Value of *ptr : " << *ptr << endl;
    cout << "Value of star ptr : " << endl;
    
    return 0;
}