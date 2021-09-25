#include <stdio.h>

int main(){
    int n = 10, i = 0;
    int a[10];
    int smallest = 10;
    while(i < n){
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n){
        if(a[i] < smallest){
            smallest = a[i];
        }
        i++;
    }
    printf("%d", smallest);
    return 0;
}