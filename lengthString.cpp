#include <iostream>
using namespace std;

char maxOccurences(string name){
    char result;
    int count[256] = {0};
    int max = 0;
    for(int i=0; i<name.length(); i++){
        count[name[i]]++;
        if(max < count[name[i]]){
            max = count[name[i]];
            result = name[i];
        }
    }
    return result;
}

int main(){
    string name = "Taaaanish";
    cout << maxOccurences(name) << endl;
    return 0;
}