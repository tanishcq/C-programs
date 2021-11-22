#include <iostream>
using namespace std;

int main(){
    int i = 1, j = 1, k=1, n=5;
    while(i<n){
        while(j < n-i){
            cout << " ";
            j++;
        }j=0;
        while(j < i){
            cout << j;
            j++;
        }
        while(k < i-1){
            cout << n-i-1;
            k++;
        }k=0;
        cout << endl;
        j=0;
        i++;
    }
    return 0;
}