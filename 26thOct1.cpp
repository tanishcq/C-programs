// Demonstrate ++ operator overloading (return type of function being void)
#include <iostream>
using namespace std;

class index{
    int val;

    public:
    index(): val(0) {}
    int getIndex() { return val; }
    void operator++() {
        val++;
    }
};

int main(){
    index idx1, idx2;
    cout << "\n1st index value : " << idx1.getIndex() << endl;
    cout << "2nd index value : " << idx2.getIndex() << endl;
    ++idx1;
    ++idx2;
    cout << "\nNew value in 1st index : " << idx1.getIndex() << endl;
    cout << "New value in 2nd index : " << idx2.getIndex() << endl;
    return 0;
}