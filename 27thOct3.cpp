// Overload + and – operator in distance class
#include <iostream>
using namespace std;

class Distance{
    int m, km;
    public:
    Distance(){
        m = 0;
        km = 0;
    }
    Distance(int M, int KM){
        m = M;
        km = KM;
    }
    Distance operator+(Distance op){
    Distance t;
    t.km = km + op.km;
    t.m = m + op.m;
    while (m > 999)
    {
    m = m - 1000;
    km = km + 1;
    }
    return t;
}

Distance operator-(Distance op){
    Distance t;
    t.km = km - op.km;
    t.m = m - op.m;
    while (m > 999){
        m = m - 1000;
        km = km + 1;
    }
    return t;
}
    void output(){
        cout << km << " km " << m << " m";
    }
};

int main()
{
    system("cls");
    Distance d1(6, 7), d2(4, 3), d3;
    cout << "Distance 1: ";
    d1.output();
    cout << "\nDistance 2: ";
    d2.output();
    cout << "\nDistance 1 + Distance 2 : ";
    d3 = d1 + d2;
    d3.output();
    cout << "\nDistance 1 - Distance 2 : ";
    d3 = d1 - d2;
    d3.output();
    return 0;
}
