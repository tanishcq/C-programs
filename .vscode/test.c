#include <stdio.h>
#include <windows.h>
int a = 5;

void sqrt(int n){
    printf("%d", n*n);
}

int main(){
    system("cls");
    sqrt(a);
    return 0; 
}