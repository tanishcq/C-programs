#include <stdio.h>
#include <windows.h>

bool armstrongChecker(int n);

int main(){
    system("cls");
    int x, check;
    printf("Enter a number to check if Armstrong number or not : ");
    scanf("-> %d", &x);
    check = armstrongChecker(x);
    if(check == 1){
        printf("It is an Armstrong number.");
    }

    else{
        printf("It is not an Armstrong number.");
    }
    return 0;
}

bool armstrongChecker(int n){
    int sum=0;
    int temp = n;
    while(n>0){
        int r = n%10;
        sum = sum + (r*r*r);
        n/=10;
    }

    return ((temp == sum) ? 1 : 0);
}