#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int factorialFinder(int);

int main(){
    system("cls");
    int n;
    system("cls");
    printf("Factorial Finder Program By Tanishcq Mehta \n");
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorialFinder(n));
    return 0;
}

int factorialFinder(int i){
    if ( i<=1 ){
        return 1;
    }
    return i = i*factorialFinder(i-1); 
}
