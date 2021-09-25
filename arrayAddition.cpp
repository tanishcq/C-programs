#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    system("cls");
    int n, a[10], b[10], sum[10];
    printf("Enter the number of elements you want in arrays : ");
    scanf("%d", &n);
    printf("Loading...");
    Sleep(800);
    system("cls");
    
    printf("Enter array 1 \n");
    for(int i = 0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    system("cls");
    printf("Enter array 2 \n");
    for(int i = 0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &b[i]);
    }
    
    printf("Array on addition\n");
    for(int i = 0; i<n; i++){
        sum[i] = a[i] + b[i];
        printf("%d\n", sum[i]);
    }

    return 0;
}