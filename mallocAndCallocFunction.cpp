#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>

int main(){
    int c, n;
    system("cls");
    printf("Please select which function you want to test? 1. malloc(), 2. calloc() {press 1 or 2} : ");
    scanf("%d", &c);
    
    if(c == 1 || c == 2){
        system("cls");
        printf("Enter the number of elements you want : ");
        scanf("%d", &n);
            if(c == 1){
                int *ptr1 = (int*) malloc(n*sizeof(int));
                printf("Enter elements \n");
                for(int i = 0; i<n; i++){
                    printf("Element %d : ", i+1);
                    scanf("%d", ptr1[i]);
                }
            }
            else{
                int *ptr2 = (int*) calloc(n,sizeof(int));
                printf("Enter elements \n");
                for(int i = 0; i<n; i++){
                    printf("Element %d : ", i+1);
                    scanf("%d", ptr2[i]);
                }
            }  
    }

    else{
        system("cls");
        printf("Error404 \n");
        printf("Explicitly exiting the program in 3 seconds.");
        Sleep(3000);
        exit(0);
    }
    return 0;
}