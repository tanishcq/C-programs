// 24. Write a function that returns by reference. The function should compare two integers. Main() function should store 0 in the integer location that has larger number.

#include <iostream>
using namespace std;

int& isLarge(int &a, int &b){
    return a > b ? a : b;
}   

int main(){
    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    isLarge(x, y) = 0;
    cout << "The bigger number is assigned 0";
    cout << "The numbers are : " << x << " and "<< y << endl;
    return 0;
}