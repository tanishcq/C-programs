#include <iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]);
    int i=s, j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<pivotIndex && j>pivotIndex) swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[5] = {5,4,3,2,1};
    quickSort(arr, 0, 4);
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    return 0;
}