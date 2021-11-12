// WAP to implement function template with multiple arguments of multiple types(input into array and find sum)
#include <iostream>
using namespace std;

template <class Test>
void input(Test *a, int size){
    for(int i = 0; i < size; i++) cin >> a[i];
}

template <class Test>
Test add(Test *a, int size){
    Test sum = 0;
    for(int i = 0; i < size; i++) sum += a[i];
    return sum;
}

int main(){
    const int size = 5;
    int array[size];
    cout << "Input array of size " << size << endl;
    input(array, size);
    cout << "Sum : " << add(array, size);;
    return 0;
}
