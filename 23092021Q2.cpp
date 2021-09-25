// Demonstrate Dynamic initialization of objects
#include <iostream>
using namespace std;

class test{
    string str;
    int length;
    
    public:
    test(){
        cout << "Default constructor invoked!" << endl;
        str = "";
        length = 0;
    }
    test(string str){
        this->str = str;
        length = str.length();
    }
    test(string a, string b){
        str = a;
        str.append(b);
        length = str.length();
    }
    test(test &str){
        this->str = str.str;
        length = this->str.length();
    }
    test(test &a, test &b){
        a.str.append(b.str);
        this->str = a.str; 
        length = this->str.length();
    }
    void show(){
        cout << "String : " << str << "\tLength : " << length << endl;
    }
};

int main(){
    system("cls");
    test o1, o2("Hi"), o3("Hello ", "World ");
    o1.show();
    cout << "\nSingle string object" << endl;
    o2.show();
    cout << "\nConcatinated strings object" << endl;
    o3.show();
    test o4(o3);
    cout << "\nObject created by copy constructor" << endl;
    o4.show();
    test o5(o4, o2);
    cout << "\nObject created by merging using copy constructor" << endl;
    o5.show();
    return 0;
}