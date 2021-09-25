// Demonstrate Dynamic Constructor
#include <iostream>
#include <string.h> 
using namespace std;

class dynamic{
    char *name;
    int length;

    public:
    // {do nothing} constructor
    dynamic(){
        length = 0;
        name = new char[length + 1];
    }

    // main constructor
    dynamic(char *str){
        length = strlen(str);
        name = new char[length + 1];
    }

    // method to display name using dynamic allocation in join method
    void show();
    void join(dynamic&, dynamic&);
};

void dynamic::join(dynamic &a, dynamic &b){
    delete name;
    length = a.length + b.length + 1;
    name = new char[length];
    strcpy(name, a.name);
    strcat(name, " ");
    strcat(name, b.name);
}

void dynamic::show(){ 
    cout << "\nName  : " << name << endl;
    cout << "Length : " << strlen(name) << endl;
}

int main(){
    system("cls");
    char *first = "Hello";
    dynamic n1 = (first);
    dynamic n2 = ("Tanishcq");
    dynamic n3 = ("!");

    dynamic s1, s2;
    s1.join(n1, n2);
    s2.join(s1, n3);

    n1.show();
    n2.show();
    n3.show();
    s1.show();
    s2.show();
    return 0;
}