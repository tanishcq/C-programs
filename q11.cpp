#include <stdio.h>
#include <windows.h>

int main(){
    system("cls");
    int n, m, sum=0;
    printf("Enter 5 digit no : ");
    scanf("%d", &n);
    
    while(n>0){
        sum = sum + (n%10);
        n = n/10;
    }
    printf("Sum = %d", sum);
    return 0;
}