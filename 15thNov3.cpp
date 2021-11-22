// To demonstrate exceptions thrown by functions invoked from within try block
#include <iostream>
#define cout std::cout
#define cin std::cin
void divide(int numerator, int denominator)
{
    cout << "\n\n--Inside Divide Functions--";
    if (denominator == 0)
        throw denominator;
    else
        cout << "\nResult For Division : " << numerator / denominator;
}
int main()
{
    cout << "\n\n--Inside Main Function--";
    try
    {
        divide(80, 5); // first call
        divide(1, 0);  // second call
        divide(12, 4); // third call
    }
    catch (int n)
    {
        cout << "\nDivide By 0 Not Allowed, Exception Caught";
    }
    cout << "\nEnd Of Program";
    return 0;
}