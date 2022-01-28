#include <iostream>
using namespace std;

char maxOccurences(string name){
    char result;
    int maxCount = 0;
    for(int i=0; i<name.length(); i++){
        int count = 1;
        for(int j=i+1; j<name.length(); j++){
            if(name[i]==name[j]) count++;
            if(count>maxCount){
                maxCount=count;
                result=name[i];
            }
        }
        count=1;
    }
    if(maxCount==1){
        cout << "All elements unique" << endl;
        result = '\0';
    }
    return result;
}

int main(){
    string name = "Tanish";
    cout << maxOccurences(name) << endl;
    return 0;
}