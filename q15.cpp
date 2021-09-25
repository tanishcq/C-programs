#include <stdio.h>
#include <windows.h>
#include <iostream>

int main(){
    system("CLS");
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = 0; j <= i ; j++){
            printf("%d", i);
        }
        std::cout<<std::endl;
    }        
}