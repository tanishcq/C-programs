#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <sstream>
using namespace std;

bool checkPalindromeS(int l, string s);
bool checkPalindromeN(int len, int N);

int main()
{
    std::sync_with_stdio(false);
    cin.tie(NULL);
    int strN = 0;
    string str;
    char c;
    int length;

        do{
        system("CLS");
        printf("Please enter a string to check Palindrome : ");
        cin >> str;
        length = str.size();
        for(int j = 0; j<length - 1; j++) {
            if((int)str[j] < 10){
                stringstream ob(str);                               
                ob << strN;
                if(checkPalindromeN(length,strN)==1){
                    cout << "It is a Palindrome." << endl;
                    break;
                }

                else{
                    cout << "It is not a Palindrome." << endl;
                    break;
                }
            }

            else {
                if(checkPalindromeS(length,str)==1){
                    cout << "It is a Palindrome." << endl;
                    break;
                }

                else{
                    cout << "It is not a palindrome." << endl;
                    break;
                }
            }
        }

        cout << "Do you want to check more? (press Y to continue)" << endl;
        cin >> c;
        }while(c=='Y' || c=='y');
    return 0;
}

bool checkPalindromeS(int L, string s){
    bool flag1 = true;
    for(int i = 0; i<L; i++){
        if(s[i]!=s[L-i-1]){
            flag1 = false;
            break;
        }
    }
    return flag1;
}

bool checkPalindromeN(int len, int strN){
    bool flag2 = true;
    int temp, r = 0;
    temp = strN;

    while (temp != 0) {
    r = r * 10;
    r = r + temp%10;
    temp /= 10;
    }

    if (strN == r){
        flag2 = true;
    }

    else{
        flag2 = false;
    }
    return flag2;
}

