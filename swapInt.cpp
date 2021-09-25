#include <stdio.h>
#include <windows.h>

int main(){
    int x, y, temp = 0;
    system("CLS");
    printf("Enter two numbers x and y : ");
    scanf("%d  %d", &x, &y);
    printf("\n");
    
    temp = x;
    x = y;
    y = temp;
    
    printf("The values of x and y now are : %d and %d respectively", x, y);
    return 0;
}