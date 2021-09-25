#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int n;
    cout << "Number : ";
    cin >> n;
    if(n%2 == 0){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    return 0;
}