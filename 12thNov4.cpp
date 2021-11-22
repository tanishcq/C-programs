// Discontiguous namespace
#include <iostream>
#define cout std::cout
#define cin std::cin
namespace NS1
{
    int x;
}
namespace NS1
{
    int y;
}
int main()
{
    NS1 ::x = NS1 ::y = 100;
    cout << "\n--Using scope resolution operator NS1 :: x * NS1 :: y--\n";
    cout << NS1 ::x * NS1 ::y;
    cout << "\n\n--Using namespace directive x * y--\n";
    using namespace NS1;
    cout << x * y;
    return 0;
}