#include <stdio.h>
#include <windows.h>

int main(){
    system("cls");
    int a[20], n = 6, temp;
    printf("Enter an array : \n");
    for(int i = 0; i<n; i++){
        printf("element %d: ", i+1);
        scanf("%d", &a[i]);
    }
   
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]<a[j]){
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            }
        }
    }
    
    printf("Sorted Array : ");
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}