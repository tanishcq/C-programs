// Implement 2D array using dynamic memory allocation
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(){
    int **ptr, row, col;
    srand((unsigned)time(0));
    cout << "Enter the number of rows and columns : ";
    cin >> row >> col;
    ptr = new int *[row];
    
    if(!ptr) cout << "Not enough memory!" << endl;
    else{
        for(int i=0; i<row; i++) 
            ptr[i] = new int[col];
        
        cout << "\nAssingning random values in the array from 1 to 9!" << endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                ptr[i][j]=(rand()%9)+1;
            }
        }
        
        cout << "\nDisplaying Matrix" << endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout << ptr[i][j] << " ";
            }
            cout << endl;
        }
        delete[] ptr;
        cout << "\nMemory freed!" << endl;
    }
    return 0;
}