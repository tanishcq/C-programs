#include <stdio.h>
#include <windows.h>

int sqrFinder(int num);

int main(){
    system("cls");
    int n, sol;
    printf("Enter a number to find it's square : ");
    scanf("%d", n);
    sol = sqrFinder(n);
    printf("Square = %d", sol);
    return 0;
}

int sqrFinder(int num){
    int result;
    result = (num * num);
    return result;
}