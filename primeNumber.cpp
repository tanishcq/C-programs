#include <stdio.h>
#include <windows.h>

void primeFinder(int x);

int main(){
    system("cls");
    int min, max;
    printf("Enter lower limit : ");
    scanf("%d", &min);
    printf("Enter uper limit : ");
    scanf("%d", &max);
    printf("List of prime numbers between %d and %d are : ", min, max);
    for(int i=min; i<=max; i++){ 
        primeFinder(i);
    }
    return 0;
}

void primeFinder(int x){
    int flag=0;
    for(int j = 2; j<=x/2; j++){
        if(x%j==0){
            flag=1;
            break;
        }
    }
    
    if(flag!=1){
            printf("-> %d ", x);
        }
}