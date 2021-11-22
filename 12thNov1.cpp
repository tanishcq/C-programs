// Demonstrate accessing namespace variables with scope resolution operator/using declarative
#include <iostream>
using namespace std;
namespace first
{
    int x = 5;
}
namespace second
{
    char y = 'A';
}
int main()
{
    using first::x;
    using second::y;
    cout << "\n\n--Output using declarative--";
    cout << "\nfirst::x = " << x;
    cout << "\nsecond::y = " << y;
    cout << "\n\n--Outputs with scope resolution operator--";
    cout << "\nfirst::x = " << first::x;
    cout << "\nsecond::y = " << second::y;
    return 0;
}