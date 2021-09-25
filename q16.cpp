#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    system("cls");
    int a[5][5],n,m;
    cout << "Enter the number of rows : ";
    cin >> n;

    cout << "Enter the number of columns : ";
    cin >> m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            system("CLS");
            cout << "Enter element at "<<i+1<<"th row and "<<j+1<<"th column : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}