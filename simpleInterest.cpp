#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
    unsigned int i = 0x80; // 128 bit
    printf("%d ", i);
    printf("%d", i << 1); // 256 bit
    return 0;
}