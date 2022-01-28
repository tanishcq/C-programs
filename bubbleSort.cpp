#include <iostream>
using namespace std;
int main(){
    int arr[10] = {10, 9 , 8, 7, 6, 5, 4, 3, 2, 1};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0])-1; i++){
        for(int j=i; j<i+1; j++){
            if(arr[j] < arr[i]) swap(arr[i], arr[j]);
        }
    }
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}