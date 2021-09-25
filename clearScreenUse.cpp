#include <iostream>
#include <conio.h>
#include <stdio.h>

// for cross-platform support 
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void pressAnyKeyToContinue();

using namespace std; 

int main(){

system("cls");
printf("This is sample line 1, \n");
Sleep(5000);
pressAnyKeyToContinue();
system("cls");
printf("This is sample line 2");
Sleep(500);
return 0;
}

void pressAnyKeyToContinue(){
int c;
printf( "\nPress a key to continue..." );
c = getch();
if (c == 0 || c == 224) getch();
}


