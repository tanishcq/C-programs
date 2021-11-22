// Demonstrate nesting of namespace
#include <iostream>
#define cout std::cout
#define cin std::cin
namespace ns_outer
{
    int i;
    namespace ns_inner
    { // a nested namespace
        int j;
    }
}
int main()
{
    ns_outer::i = 10;
    // ns_inner::j = 10; Error, ns_inner is not in view
    ns_outer::ns_inner::j = 1; // this is right
    cout << "ns_outer::i => " << ns_outer::i << "\nns_outer::ns_inner::j => " << ns_outer::ns_inner::j;
    // use ns_outer
    using namespace ns_outer;
    // Now that ns_outer is in view, ns_inner can be used to refer to j.
    cout << "\n\n--Using ns_outer directive-- \ni * ns_inner::j =>" << i * ns_inner::j;
    return 0;
}