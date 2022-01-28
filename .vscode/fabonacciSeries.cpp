#include <iostream>
using namespace std;
int main(){
    int n = 10, curr = 1, prev = 0, next = 0;
    for(int i = 0; i<n; i++){
        if(i == 0){
            cout << "0" << ",";
            continue;
        }
        if(i == 1){
            cout << "1" << ",";
        }
        next = prev + curr;
        prev = curr;
        curr = next;
        cout << next << ",";
    }
    return 0;
}