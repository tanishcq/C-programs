#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x
#define string std::string

using namespace std;

bool search(int *arr,int s, int e, int key){
    if(s>e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid] == key) return true;
    if(arr[mid] > key){
        return search(arr, s, mid-1, key);
    }
    if(arr[mid] < key){
        return search(arr, mid+1, e, key);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5, key = 5;
    bool ans = search(arr, 0, 5, key);
    if(ans) cout << "present" << endl;
    else cout << "absent" << endl;
    return 0;
}