#include <iostream>
#include <windows.h>
using namespace std;

int add(int x = 1, int y = 2, int z = 3){
    return x + y + z;
}

int main(){
    system("cls");
    int a,b,c,sum;
    cout << "add three numbers : " << endl;
    cin >> a >> b >> c;
    sum = add(a,b,c);
    cout << "Sum with arguments passed : " << sum << endl;
    sum = add();
    cout << "Sum with default arguments : "<< sum << endl;
    return 0;
}


