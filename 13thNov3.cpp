// Demonstrate use of class in a namespace
#include <iostream>
#define cout std::cout
#define cin std::cin
namespace ns
{
    class Sample;
}
class ns::Sample
{
public:
    void display()
    {
        cout << "ns :: sample :: display()";
    }
};
int main()
{
    ns::Sample obj;
    obj.display();
    return 0;
}