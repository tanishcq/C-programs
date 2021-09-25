#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    system("cls");
    int *ptr,**pt;
    int m = 4, n = 3;
    ptr = &m;
    pt = &ptr;          // double pointer
    printf("%d \n", *ptr);
    printf("%d", *pt);
    return 0;
}