// Implement 1D array using dynamic memory allocation
#include <iostream>
using namespace std;

int main(){
    int *ptr = new int[5];
    if(!ptr) cout << "Not enough memory!" << endl;
    else{
        cout << "Storing values of elements as their respective indeces + 1 in array" << endl;
        for(int i=0; i<5; i++) ptr[i] = i+1;
        cout << "\nOutput" << endl;
        for(int i=0; i<5; i++) cout << ptr[i] << " ";
        delete[] ptr;
        cout << "\nMemory freed!" << endl;  
    } 
    return 0;
}