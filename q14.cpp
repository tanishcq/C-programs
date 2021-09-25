#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    system("CLS");
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            printf("%d", j);
        }
        std::cout<<std::endl;
    }
    return 0;
}