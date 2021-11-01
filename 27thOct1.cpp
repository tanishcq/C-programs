// Overload prefix and postfix versions of ++, -- and - (negate) operators
#include <iostream>
using namespace std;

class index{
    int val;
    
    public: 
    index(){
        val = 0;
    }
    index(int x){
        val = x;
    }
    index operator++(){
        return index(++val);
    }
    index operator++(int){
        return index(val++);
    }
    index operator--(){
        return index(--val);
    }
    index operator--(int){
        return index(val--);
    }
    index operator-(){
        return index(-val);
    }
    int getIndex(){
        return val;
    }
};

int main(){
    index i1, i2, i3(1), i4(1);
    system("CLS");
    cout << "\nIncrement Operator" << endl;
    cout << "Value in Index 1 : " << i1.getIndex() << endl;
    cout << "Value in Index 2 : " << i2.getIndex() << endl;
    cout << "Value in Index 3 : " << i3.getIndex() << endl;
    cout << "Value in Index 4 : " << i4.getIndex() << endl;

    i1 = i3++;
    cout << "\nIndex 1 = Index 3 ++" << endl;
    cout << "Value in Index 1 : " << i1.getIndex() << endl;
    cout << "Value in Index 3 : " << i3.getIndex() << endl;

    i2 = ++i4;
    cout << "\nIndex 2 = ++ Index 4" << endl;
    cout << "Value in Index 2 : " << i2.getIndex() << endl;
    cout << "Value in Index 4 : " << i4.getIndex() << endl;

    cout << "\nDecrement Operator" << endl;
    cout << "Value in Index 1 : " << i1.getIndex() << endl;
    cout << "Value in Index 2 : " << i2.getIndex() << endl;
    cout << "Value in Index 3 : " << i3.getIndex() << endl;
    cout << "Value in Index 4 : " << i4.getIndex() << endl;

    i1 = i3--;
    cout << "\nIndex 1 = Index 3 --" << endl;
    cout << "Value in Index 1 : " << i1.getIndex() << endl;
    cout << "Value in Index 3 : " << i3.getIndex() << endl;

    i2 = --i4;
    cout << "\nIndex 2 = -- Index 4" << endl;
    cout << "Value in Index 2 : " << i2.getIndex() << endl;
    cout << "Value in Index 4 : " << i4.getIndex() << endl;

    i3 = -i1;
    cout << "\nIndex 3 = - Index 1" << endl;
    cout << "Value in Index 1 : " << i1.getIndex() << endl;
    cout << "Value in Index 3 : " << i3.getIndex() << endl;
    return 0;
}