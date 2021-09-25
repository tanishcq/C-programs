// WAP to add two distances.(DIstance class to have km and mtr as data members)
#include <iostream>
using namespace std;

class Distance{
    private:
    int m, km;

    public:
    void sum(Distance, Distance);
    void input(){
        cout << "\nEnter the distances" << endl;
        cout << "In meters : ";
        cin >> m;
        cout << "In kilometers : ";
        cin >> km;
    }
    void output(){
        cout << "\nDistances in meter and kilometers respectively are " << m << " and " << km << endl;
    }
};

void Distance::sum(Distance a, Distance b){
    int q,r;
    km = a.km + b.km;
    m = a.m + b.m;
    if(m > 999){
        r = m % 1000;
        q = m / 1000;
        km += q;
        m = r; 
    }
}

int main(){
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d3.sum(d1, d2);
    d1.output();
    d2.output();
    d3.output();
    return 0;
}