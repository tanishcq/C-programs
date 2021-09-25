#include <stdio.h>
#include <windows.h>

int main(){
    system("cls");
    int n, r, reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n!=0){
       r = n%10;
       reverse = (reverse*10)+r;
       n = n/10;
    } 
    printf("Reverse = %d", reverse);
    return 0;
}