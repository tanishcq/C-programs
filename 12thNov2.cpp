// Use objects of one namespace and then those of another one by splitting the code in different blocks
#include <iostream>
#define cout std::cout
#define cin std::cin
namespace first
{
    int x = 10;
}
namespace second
{
    char x = 'A';
}
int main()
{
    {
        using namespace first;
        cout << "Value of 'x' from first namespace = " << x;
    }
    {
        using namespace second;
        cout << "\nValue of 'x' from second namespace = " << x;
    }
    return 0;
}