#include <iostream>
using namespace std;
int main(){
    int arr[10] = {10, 9 , 8, 7, 6, 5, 4, 3, 2, 1};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        int min=i;
        for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            swap(arr[i], arr[min]); 
        }
    }
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}