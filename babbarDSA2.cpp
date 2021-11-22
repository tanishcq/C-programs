#include<iostream>
using namespace std;
int main(){
   int n = 3, i = 0;
    char ch = 'A';
   while (i < n){
       int j = 0;
       while(j < 3){
           cout << ch++;
           j++;
       }
       cout << endl;
       i++;
   }
}