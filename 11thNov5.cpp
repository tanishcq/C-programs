// WAP for calculator using class template
#include <iostream>
using namespace std;
template <class T>
class Calculator
{
    T n1, n2;

public:
    Calculator(T a, T b)
    {
        n1 = a;
        n2 = b;
    }
    void displayResult()
    {
        cout << "For numbers " << n1 << " and " << n2 << "\n";
        cout << "Addition= " << add() << "\n";
        cout << "Subtraction= " << subtract() << "\n";
        cout << "Multiplication= " << multiply() << "\n";
        cout << "Division=" << divide() << "\n";
    }
    T add()
    {
        return n1 + n2;
    }
    T subtract()
    {
        return n1 - n2;
    }
    T multiply()
    {
        return n1 * n2;
    }
    T divide()
    {
        return n1 / n2;
    }
};
int main()
{
    Calculator<int> CalcInt(10, 5);
    Calculator<float> CalcFloat(20.25, 5.55);
    CalcInt.displayResult();
    cout << endl;
    CalcFloat.displayResult();
    return 0;
}