#include <iostream>
using namespace std;

bool check(){
    char n;
    cout << "Enter a character : ";
    cin >> n;
    if(n>=48 && n<=57){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    if(check() == 1){
        cout << " It is a number " << endl;
    }
    else{
        cout << " It is an appleabet" << endl;
    }
    return 0;
}
