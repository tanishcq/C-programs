// WAP to implement overloading of function template
#include <iostream>
using namespace std;
template <class T1, class T2>
void show(T1 a, T2 b)
{
    cout << "Two Argument Template: "
         << a << " " << b << endl;
}
template <class T1>
void show(T1 a)
{
    cout << "One Argument Template: "
         << a << endl;
}
void show(int a)
{
    cout << "One Argument (Int): "
         << a << endl;
}
int main()
{
    show(5, "Program");
    show("Text");
    show(20);
    return 0;
}